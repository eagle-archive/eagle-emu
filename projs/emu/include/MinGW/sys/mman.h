#ifndef	_SYS_MMAN_H_
#define	_SYS_MMAN_H_

/* All the headers include this file. */
#include <_mingw.h>
#include <sys/types.h>

#define MAP_SHARED 0x01
#define MAP_PRIVATE 0x02
#define MAP_FIXED 0x10

#define PROT_NONE 0x0
#define PROT_READ 0x1
#define PROT_WRITE 0x2
#define PROT_EXEC 0x4

#define MAP_SHARED 0x01
#define MADV_RANDOM 1

#define MAP_FAILED	((void *)-1)

#define MCL_CURRENT 1
#define MCL_FUTURE 2

#define MS_ASYNC 1
#define MS_INVALIDATE 2
#define MS_SYNC 4

__BEGIN_DECLS

_CRTIMP void *mmap(void *addr, size_t len, int prot, int flags, int fildes, off_t off);
_CRTIMP int munmap(void *, size_t);
_CRTIMP int madvise (const void *, size_t, int);
_CRTIMP int mincore(void*  start, size_t  length, unsigned char*  vec);
_CRTIMP int mlock(const void *, size_t);
_CRTIMP int munlock(const void *, size_t);
_CRTIMP int msync(const void *, size_t, int);
_CRTIMP int munlockall(void);

__END_DECLS

#endif	/* _SYS_MMAN_H_ */
