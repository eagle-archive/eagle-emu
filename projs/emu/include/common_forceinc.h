#ifndef _COMMON_FORCEINC_H_
#define _COMMON_FORCEINC_H_

#define USE_MINGW 1
#include "arch\windows\AndroidConfig.h"

#define ANDROID
#define __ANDROID__
#define EAGLE_EMU

/* For cygwin, use pthread instead of win32 thread */
#ifdef __CYGWIN__
# undef HAVE_WIN32_THREADS
# define HAVE_PTHREADS
#endif

/* Cygwin is more like Linux than Windows */
#ifdef __CYGWIN__
# undef WIN32
# undef _WIN32
#endif

#define HAVE_STDINT_H
#define HAVE_SCHED_H
#define HAVE_PREAD 1
#undef _WIN32_WINNT
#define _WIN32_WINNT 0x0501

#if defined(__cplusplus)
# define __BEGIN_DECLS   extern "C" {
# define __END_DECLS     }
# define EXTERN_C extern "C"
#else
# define __BEGIN_DECLS
# define __END_DECLS
# define EXTERN_C extern
#endif

#endif /* _COMMON_FORCEINC_H_ */
