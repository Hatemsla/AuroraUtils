# Данная библиотека непроверена ОС Аврора!

### Варинат чтения данных с Serial порта
```py
import serial

ser = serial.Serial(
    port='port', baudrate=115200)

while True:
    value = ser.readline()
    valueToString = str(value, 'UTF-8')
    print(valueToString)
```

**port** - полное название порта на ОС Аврора 
