import 'dart:ffi';
import 'dart:io';

import 'ffi_plugin_bindings_generated.dart';

int sum(int a, int b) => _bindings.sum(a, b);
int multiply(int a, int b) => _bindings.multiply(a, b);

const String _libName = 'ffi_plugin';

/// The dynamic library in which the symbols for [FfiPluginBindings] can be found.
final DynamicLibrary _dylib = () {
  if (Platform.isMacOS || Platform.isIOS) {
    return DynamicLibrary.open('$_libName.framework/$_libName');
  }
  if (Platform.isAndroid || Platform.isLinux) {
    return DynamicLibrary.open('lib$_libName.so');
  }
  if (Platform.isWindows) {
    return DynamicLibrary.open('$_libName.dll');
  }
  throw UnsupportedError('Unknown platform: ${Platform.operatingSystem}');
}();

/// The bindings to the native functions in [_dylib].
final FfiPluginBindings _bindings = FfiPluginBindings(_dylib);
