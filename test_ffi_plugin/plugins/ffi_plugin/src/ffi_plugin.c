#include "ffi_plugin.h"

FFI_PLUGIN_EXPORT intptr_t sum(intptr_t a, intptr_t b) { return a + b; }

FFI_PLUGIN_EXPORT intptr_t multiply(intptr_t a, intptr_t b) { return a * b; }