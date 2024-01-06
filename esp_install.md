## Развертка приложения на esp32
Для начала нужно создать проект для esp.
В качестве среды можно использовать ArduinoIDE, VS code c PlatformIO (это лучше)

Далее создаем проект для Arduino UNO (или другой платы)
В файле main.cpp прописываем слудующее:
```cpp
#include <WString.h>
#include <USBAPI.h>

String receivedMessage = "";

void setup() {
  Serial.begin(115200);
  Serial.println("Serial USB UART");
  Serial.flush();
}

void loop() {

  // Отправляем сообщение на USB порт
  Serial.print("[");
  Serial.print(millis());
  Serial.print("] Hello, world!\n");

  // Задержка в 0.5 секунды
  delay(500);

  // Считываем приходящие сообщения
  while (Serial.available() > 0) {
    char receivedChar = Serial.read();
    if (receivedChar == '\n') {
      // Приходящее сообщение завершено, обработаем его
      Serial.print("[");
      Serial.print(millis());
      Serial.print("] Received: ");
      Serial.println(receivedMessage);
      receivedMessage = ""; // Сбросим строку для следующего сообщения
    } else {
      // Добавляем символ к приходящему сообщению
      receivedMessage += receivedChar;
    }
  }
}
```

Данный скрипт отправляет сообщение на serial (он же usb) порт, а также считывает и выводит приходящие сообщения.
Чтобы установить данный скрипт на МК, нужно подключить его по usb к ПК, и в среде загрузить код.

Далее, подключаем МК к девайсу на Авроре (нужен ОТГ переходник?)

После подключения, МК будет слать данные на usb.
И в конце запускаем скрипт в терминале на устройстве стандартной командой:
```shell
python3 file_path.py
```
