#ifndef _EMU_IO_H_
#define _EMU_IO_H_

/* All the headers include this file. */
#include <_mingw.h>
#include <sys/types.h>

__BEGIN_DECLS
_CRTIMP int __cdecl __MINGW_NOTHROW mkdir (const char *, mode_t);
__END_DECLS

#define mkdir  mkdir_mingw
#include <MinGW/include/io.h>
#undef mkdir

#endif	/* _EMU_IO_H_ not defined */
