#ifndef _LIBSTLPORT_FORCEINC_H_
#define _LIBSTLPORT_FORCEINC_H_

#include "projs\emu\include\common_forceinc.h"

// defined in Android.mk
#define _GNU_SOURCE 1

// In external\stlport\stlport\stl\config\_system.h, include <stl/config/_windows.h>
// instead of <stl/config/_android.h>
#undef ANDROID

// stlport\src\stdio_streambuf.cpp:95:26: error: 'fgetpos64' was not declared in this scope
#define _STLP_USE_DEFAULT_FILE_OFFSET

#endif // _LIBSTLPORT_FORCEINC_H_
