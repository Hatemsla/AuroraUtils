# Тестовое приложение на флаттере для проверки передачи данных через dbus
```dart
import 'dart:convert';

import 'package:flutter/material.dart';
import 'package:dbus/dbus.dart';

void main() {
  runApp(const MainApp());
}

class MainApp extends StatefulWidget {
  const MainApp({Key? key}) : super(key: key);

  @override
  State<MainApp> createState() => _MainAppState();
}

class _MainAppState extends State<MainApp> {
  String randomText = "[0] Hello, world!";
  late ScrollController _scrollController;

  @override
  void initState() {
    super.initState();
    _scrollController = ScrollController();
  }

  Future<String> callDBusMethod() async {
    try {
      final client = DBusClient.session();
      final remoteObject = DBusRemoteObject(client,
          name: 'org.example.HelloWorld',
          path: DBusObjectPath('/org/example/HelloWorld'));

      // Вызываем метод Hello
      final response = await remoteObject.callMethod(
          'org.example.HelloWorld', 'Hello', [],
          replySignature: DBusSignature('s'));

      final greeting = response.values[0].asString();

      return greeting;
    } catch (e, st) {
      throw 'Failed to call D-Bus method. Error: $e\nStackTrace: $st';
    }
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        body: Column(
          children: [
            Padding(
              padding: const EdgeInsets.all(24),
              child: Container(
                height: 200,
                width: double.infinity,
                padding: const EdgeInsets.all(16),
                margin: const EdgeInsets.only(top: 24),
                decoration: BoxDecoration(
                  color: Colors.blueGrey[200],
                  borderRadius: BorderRadius.circular(12),
                ),
                child: SingleChildScrollView(
                  controller: _scrollController,
                  child: FutureBuilder<String>(
                    future: callDBusMethod(),
                    builder: (context, snapshot) {
                      if (snapshot.connectionState == ConnectionState.waiting) {
                        return const CircularProgressIndicator();
                      } else if (snapshot.hasError) {
                        return Text('Error: ${snapshot.error}');
                      } else {
                        var newRandomText =
                            "\n[${DateTime.now().millisecondsSinceEpoch}] ${snapshot.data}";
                        randomText += newRandomText;
                        _scrollController.animateTo(
                          _scrollController.position.maxScrollExtent,
                          duration: const Duration(milliseconds: 200),
                          curve: Curves.easeOut,
                        );
                        return Text(
                          randomText,
                          style: const TextStyle(fontSize: 14),
                        );
                      }
                    },
                  ),
                ),
              ),
            ),
            ElevatedButton(
              onPressed: () {
                setState(() {
                  callDBusMethod();
                });
              },
              child: const Text("Get Data"),
            ),
          ],
        ),
      ),
    );
  }
}

```

```yaml
name: example
description: A new Flutter project.
publish_to: 'none'
version: 1.0.0+1

environment:
  sdk: '>=3.1.2 <4.0.0'

dependencies:
  flutter:
    sdk: flutter


  cupertino_icons: ^1.0.2
  dbus: ^0.7.10

dev_dependencies:
  flutter_test:
    sdk: flutter
  flutter_lints: ^2.0.0

flutter:

  uses-material-design: true
```
