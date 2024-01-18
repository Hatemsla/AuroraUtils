# Драйвер с dbus функциями
```py
import asyncio
from dasbus.server.interface import dbus_interface
from dasbus.typing import Str
from dasbus.connection import SessionMessageBus
from dasbus.loop import EventLoop
import usb.core
import usb.util
import time

@dbus_interface("org.example.HelloWorld")
class HelloWorld(object):

    def __init__(self, usb_device):
        self.usb_device = usb_device

    def Hello(self) -> Str:
        global ret
        try:
            ret = self.usb_device.read(READ_PORT, PACKAGE_SIZE, USB_TIMEOUT_MILLIS)
            return str(ret)
        except Exception as e:
            print(e)
            return "Error reading from USB"

READ_PORT = 0x82
WRITE_PORT = 0x02
PACKAGE_SIZE = 32

USB_TIMEOUT_MILLIS = 200

VENDOR_WRITE_TYPE  = 0x40
VENDOR_READ_TYPE   = 0xC0

VENDOR_READ	       = 0x95
VENDOR_WRITE       = 0x9A
VENDOR_SERIAL_INIT = 0xA1
VENDOR_MODEM_OUT   = 0xA4
VENDOR_VERSION     = 0x5F

LCR_ENABLE_RX   = 0x80
LCR_ENABLE_TX   = 0x40
LCR_MARK_SPACE  = 0x20
LCR_PAR_EVEN    = 0x10
LCR_ENABLE_PAR  = 0x08
LCR_STOP_BITS_2 = 0x04
LCR_CS8         = 0x03
LCR_CS7         = 0x02
LCR_CS6         = 0x01
LCR_CS5         = 0x00

GCL_CTS = 0x01
GCL_DSR = 0x02
GCL_RI  = 0x04
GCL_CD  = 0x08
SCL_DTR = 0x20
SCL_RTS = 0x40


dtr = False
rts = False

DEFAULT_BAUD_RATE = 921600

def find_device():
    dev = usb.core.find()
    if dev is None:
        raise ValueError('Device not found')

    print(dev)

    return dev

def init(dev):
    print("init")

    # checkState("init #1", 0x5f, 0, new int[]{-1 /* 0x27, 0x30 */, 0x00});
    ret = control_read(dev, VENDOR_VERSION, 0, 0, 0x02)
    print("VENDOR_VERSION ret=", ret, to_hex(ret))

    # if (controlOut(0xa1, 0, 0) < 0) {
    ret = control_write(dev, VENDOR_SERIAL_INIT, 0, 0, 0x00)
    print("SERIAL_INIT ret=", ret, to_hex(ret))

    set_baud_rate(dev, DEFAULT_BAUD_RATE)

    # checkState("init #4", 0x95, 0x2518, new int[]{-1 /* 0x56, c3*/, 0x00});
    ret = control_read(dev, VENDOR_READ, 0x2518, 0, 0x00)
    print("VENDOR_WRITE.1 ret=", ret, to_hex(ret))

    # controlOut(0x9a, 0x2518, LCR_ENABLE_RX | LCR_ENABLE_TX | LCR_CS8)
    ret = control_write(dev, VENDOR_WRITE, 0x2518, LCR_ENABLE_RX | LCR_ENABLE_TX | LCR_CS8, 0x00)
    print("VENDOR_WRITE.3 ret=", ret, to_hex(ret))

    # checkState("init #6", 0x95, 0x0706, new int[]{-1/*0xf?*/, -1/*0xec,0xee*/});
    ret = control_read(dev, VENDOR_READ, 0x0706, 0, 0x00)
    print("VENDOR_WRITE.1 ret=", ret, to_hex(ret))

    # controlOut(0xa1, 0x501f, 0xd90a)
    ret = control_write(dev, VENDOR_SERIAL_INIT, 0x501f, 0xd90a, 0x00)
    print("VENDOR_SERIAL_INIT.3 ret=", ret, to_hex(ret))

    set_baud_rate(dev, DEFAULT_BAUD_RATE)

    set_control_lines(dev)


def set_control_lines(dev):
    ret = control_write(dev, VENDOR_MODEM_OUT, ~((dtr and SCL_DTR or 0) | (rts and SCL_RTS or 0)), 0, 0x00)
    print("set_control_lines ret=", ret)

    return ret

def set_baud_rate(dev, baudRate):
    print("set_baud_rate")

    factor: int
    divisor: int

    if (baudRate == 921600):
        divisor = 7
        factor = 0xf300
    else:
        BAUDBASE_FACTOR = 1532620800
        BAUDBASE_DIVMAX = 3

        factor = int(BAUDBASE_FACTOR / baudRate)
        divisor = BAUDBASE_DIVMAX

        while ((factor > 0xfff0) and divisor > 0):
            factor >>= 3
            divisor=divisor-1
        
        assert factor < 0xfff0

        factor = 0x10000 - factor

    divisor |= 0x0080

    print("factor", factor)

    val1 = (int) ((factor & 0xff00) | divisor)
    val2 = (int) (factor & 0xff)

    print("baud rate=%d, 0x1312=0x%04x, 0x0f2c=0x%04x".format(baudRate, val1, val2))

    ret = control_write(dev, VENDOR_WRITE, 0x1312, val1, 0x00)
    print("VENDOR_WRITE.BaudDate.1 ret=", ret)

    ret = control_write(dev, VENDOR_WRITE, 0x0f2c, val2, 0x00)
    print("VENDOR_WRITE.BaudDate.2 ret=", ret)


def control_write(dev, req, index, value, data):
    print("control_write")
    ret = dev.ctrl_transfer(VENDOR_WRITE_TYPE, req, index, value, data)
    return ret

def control_read(dev, req, index, value, len):
    print("control_read")
    ret = dev.ctrl_transfer(VENDOR_READ_TYPE, req, index, value, len)
    return ret 

def send_hello(dev, msg):
    print("Send message ", msg)
    ret = dev.write(WRITE_PORT, msg, USB_TIMEOUT_MILLIS)
    print("Write ret=", ret)
    return ret

def to_hex(ret):
    if (isinstance(ret, int)):
        return '0x{:02x} '.format(ret)
    else:    
        return ''.join('0x{:02x} '.format(x) for x in ret)

dev = find_device()
init(dev)

print(HelloWorld.__dbus_xml__)

bus = SessionMessageBus()
hello_world_obj = HelloWorld(dev)
bus.publish_object("/org/example/HelloWorld", hello_world_obj)
bus.register_service("org.example.HelloWorld")

loop = EventLoop()
try:
    loop.run()
except KeyboardInterrupt:
    print('Exiting...')
```
