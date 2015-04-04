#ifndef _LIBDVM_FORCEINC_H_
#define _LIBDVM_FORCEINC_H_

// used in Mterp.c
#define DVM_NO_ASM_INTERP 	1

#include "../dalvik_common_forceinc.h"

// dalvik/vm/Thread.c:3636: error: `SIGSTKFLT' undeclared (first use in this function)
#ifndef SIGSTKFLT
#define SIGSTKFLT 16
#endif

// dalvik/vm/alloc/HeapBitmap.c:162: error: `MADV_DONTNEED' undeclared (first use in this function)
// copied from bionic\libc\kernel\common\asm-generic\mman.h
#define MADV_DONTFORK 10
#define MADV_DONTNEED 4

#endif // _LIBDVM_FORCEINC_H_
