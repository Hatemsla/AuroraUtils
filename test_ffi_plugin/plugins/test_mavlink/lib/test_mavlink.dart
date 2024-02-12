import 'dart:ffi';
import 'dart:io';

import 'test_mavlink_bindings_generated.dart';

List<List<int>> points = [
  [0, 0, -2],
  [0, 5, -2],
  [5, 5, -2],
  [5, 0, -2]
];

int sum(int a, int b) => _bindings.sum(a, b);

void send_heardbeat() => _bindings.send_heardbeat();

void send_local_pose() => _bindings.send_local_pose(
    points[0][0] as double, points[0][1] as double, points[0][2] as double);

bool point_is_reached() => _bindings.point_is_reached();

const String _libName = 'test_mavlink';

/// The dynamic library in which the symbols for [TestMavlinkBindings] can be found.
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
final TestMavlinkBindings _bindings = TestMavlinkBindings(_dylib);
