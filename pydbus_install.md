### Руководство по работе с dbus через python3
На данный момент проверены две бибилиотеки: dasbus и pydbus.

Для работы с ними нужно установить PyObject:
```shell
pkcon install python3-gobject
```
Установка либ:
```shell
python3 -m pip install pydbus
```
```shell
python3 -m pip install dasbus
```
По функционалу либы схожи, поэтому выбрать можно любую, но у dasbus есть автогенератор XML разметки для dbus, что сильно упрощает жизнь по сравнению с pydbus, где автогенерации нет.
