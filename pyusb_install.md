### Данная библиотека проверена на вывод метадаты по USB портам на ОС Аврора
**Соответствующий код для вывода данных:**
```py
import sys
from usb.core import NoBackendError, USBError
import usb.util

devices = usb.core.find(find_all=True)

if devices is None:
    raise ValueError('No USB devices found')

for dev in devices:
    print(dev)
    
    for cfg in dev:
        alt = usb.util.find_descriptor(cfg, find_all=True, bInterfaceNumber=1)

        try:
            dev.set_configuration(cfg)
        except USBError:
            print("USBError")
        except NoBackendError:
            print("NoBackendError")
            

        print(alt)
        
```

**Код для передачи и считывания данных:**
```py
import usb.core
import usb.util
import time

# https://github.com/pyusb/pyusb/blob/master/docs/tutorial.rst

# DEVICE ID 10c4:ea60 on Bus 001 Address 007 =================
#  bLength                :   0x12 (18 bytes)
#  bDescriptorType        :    0x1 Device
#  bcdUSB                 :  0x110 USB 1.1
#  bDeviceClass           :    0x0 Specified at interface
#  bDeviceSubClass        :    0x0
#  bDeviceProtocol        :    0x0
#  bMaxPacketSize0        :   0x40 (64 bytes)
#  idVendor               : 0x10c4
#  idProduct              : 0xea60
#  bcdDevice              :  0x100 Device 1.0
#  iManufacturer          :    0x1 Silicon Labs
#  iProduct               :    0x2 CP2102 USB to UART Bridge Controller
#  iSerialNumber          :    0x3 0001
#  bNumConfigurations     :    0x1
#   CONFIGURATION 1: 100 mA ==================================
#    bLength              :    0x9 (9 bytes)
#    bDescriptorType      :    0x2 Configuration
#    wTotalLength         :   0x20 (32 bytes)
#    bNumInterfaces       :    0x1
#    bConfigurationValue  :    0x1
#    iConfiguration       :    0x0
#    bmAttributes         :   0x80 Bus Powered
#    bMaxPower            :   0x32 (100 mA)
#     INTERFACE 0: Vendor Specific ===========================
#      bLength            :    0x9 (9 bytes)
#      bDescriptorType    :    0x4 Interface
#      bInterfaceNumber   :    0x0
#      bAlternateSetting  :    0x0
#      bNumEndpoints      :    0x2
#      bInterfaceClass    :   0xff Vendor Specific
#      bInterfaceSubClass :    0x0
#      bInterfaceProtocol :    0x0
#      iInterface         :    0x2 CP2102 USB to UART Bridge Controller
#       ENDPOINT 0x81: Bulk IN ===============================
#        bLength          :    0x7 (7 bytes)
#        bDescriptorType  :    0x5 Endpoint
#        bEndpointAddress :   0x81 IN
#        bmAttributes     :    0x2 Bulk
#        wMaxPacketSize   :   0x40 (64 bytes)
#        bInterval        :    0x0
#       ENDPOINT 0x1: Bulk OUT ===============================
#        bLength          :    0x7 (7 bytes)
#        bDescriptorType  :    0x5 Endpoint
#        bEndpointAddress :    0x1 OUT
#        bmAttributes     :    0x2 Bulk
#        wMaxPacketSize   :   0x40 (64 bytes)
#        bInterval        :    0x0

READ_PORT = 0x81
WRITE_PORT = 0x01
PACKAGE_SIZE = 64

USB_TIMEOUT_MILLIS = 5000

#
# Configuration Request Types
#
REQTYPE_HOST_TO_DEVICE = 0x41
REQTYPE_DEVICE_TO_HOST = 0xc1

#
# Configuration Request Codes
#
SILABSER_IFC_ENABLE_REQUEST_CODE = 0x00
SILABSER_SET_LINE_CTL_REQUEST_CODE = 0x03
SILABSER_SET_BREAK_REQUEST_CODE = 0x05
SILABSER_SET_MHS_REQUEST_CODE = 0x07
SILABSER_SET_BAUDRATE = 0x1E
SILABSER_FLUSH_REQUEST_CODE = 0x12
SILABSER_GET_MDMSTS_REQUEST_CODE = 0x08

FLUSH_READ_CODE = 0x0a
FLUSH_WRITE_CODE = 0x05

#
# SILABSER_IFC_ENABLE_REQUEST_CODE
#
UART_ENABLE = 0x0001
UART_DISABLE = 0x0000

#*
# SILABSER_SET_MHS_REQUEST_CODE
#
DTR_ENABLE = 0x101
DTR_DISABLE = 0x100
RTS_ENABLE = 0x202
RTS_DISABLE = 0x200

#
# SILABSER_GET_MDMSTS_REQUEST_CODE
#
STATUS_CTS = 0x10
STATUS_DSR = 0x20
STATUS_RI = 0x40
STATUS_CD = 0x80



dtr = False
rts = False

DEFAULT_BAUD_RATE = 115200

def find_device():
    # find our device
    dev = usb.core.find()

    # was it found?
    if dev is None:
        raise ValueError('Device not found')


    print(dev)

    # set the active configuration. With no arguments, the first
    # configuration will be the active one
    dev.set_configuration()

    # get an endpoint instance
    cfg = dev.get_active_configuration()
    intf = cfg[(0,0)]

    ep0 = intf[0]
    ep1 = intf[1]
    
    assert ep0 is not None
    assert ep1 is not None

    print("EP0", ep0)
    print("EP1", ep1)

    return dev

def init(dev):
    print("init")

    set_config_single(dev, SILABSER_IFC_ENABLE_REQUEST_CODE, UART_ENABLE)
    set_config_single(dev, SILABSER_SET_MHS_REQUEST_CODE, (dtr and DTR_ENABLE or DTR_DISABLE) | (rts and RTS_ENABLE or RTS_DISABLE))

    set_baud_rate(dev, 115200)

def set_baud_rate(dev, baudRate):
    print("set_baud_rate")

    bytes = baudRate.to_bytes(4, 'little') 

    print("baud rate=%d, bytes=0x%04x", baudRate, bytes)

    ret = dev.ctrl_transfer(REQTYPE_HOST_TO_DEVICE, SILABSER_SET_BAUDRATE, 0, 0, bytes)
    print("SetBaudDate ret=", ret)

def set_config_single(dev, req, value):
    print("set_config_signle")
    ret = dev.ctrl_transfer(REQTYPE_HOST_TO_DEVICE, req, value, 0, 0x00)
    return ret 

# def control_write(dev, req, index, value, data):
#     print("control_write")
#     ret = dev.ctrl_transfer(VENDOR_WRITE_TYPE, req, index, value, data)
#     return ret

# def control_read(dev, req, index, value, len):
#     print("control_read")
#     ret = dev.ctrl_transfer(VENDOR_READ_TYPE, req, index, value, len)
#     return ret 

def send_hello(dev, msg):
    print("Send message ", msg)
    ret = dev.write(WRITE_PORT, msg, USB_TIMEOUT_MILLIS)
    print("Write ret=", ret)
    return ret
    
try:
    
    dev = find_device()
    init(dev)

    #$$$$\r\n
    msg = 'WOOPWOOP\r\n'

    test = 0

    time.sleep(3)

    while(True):
        try:
        
            send_hello(dev, msg)

            ret = dev.read(READ_PORT, PACKAGE_SIZE, USB_TIMEOUT_MILLIS)
            print("Read ret=", ''.join('0x{:02x} '.format(x) for x in ret))

            sret = ''.join([chr(x) for x in ret])
            print("Read sret=", sret)
            time.sleep(0.5)
        except KeyboardInterrupt:
            print('!!FINISH.0!!')
            break
        except:
            print("Read error")
        test=test+1
except KeyboardInterrupt:
    print('!!FINISH.0!!')
```
