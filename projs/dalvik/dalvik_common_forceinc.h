#ifndef _DALVIK_COMMON_FORCEINC_H_
#define _DALVIK_COMMON_FORCEINC_H_

#include "projs\emu\include\common_forceinc.h"

// WITH_JIT is defined in phone build, but not portable to cygwin
// #define WITH_JIT 1

// on phone build, WITH_HPROF is defined in some global .mk file
// #define WITH_HPROF 1
// #define WITH_PROFILER 1

// WITH_HPROF_UNREACHABLE is not referenced in code
// WITH_HPROF_STACK is not referenced in code
// DVM_TRACK_HEAP_MARKING not defined?


#endif // _DALVIK_COMMON_FORCEINC_H_
