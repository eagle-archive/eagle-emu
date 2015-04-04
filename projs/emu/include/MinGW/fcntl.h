#ifndef _EMU_FCNTL_H_
#define _EMU_FCNTL_H_

#include <MinGW/include/fcntl.h>

#define O_NONBLOCK 00004000
#define O_NOCTTY	00000400
#define O_SYNC		00010000

#define F_DUPFD 0
#define F_GETFD 1
#define F_SETFD 2
#define F_GETFL 3
#define F_SETFL 4
#ifndef F_GETLK
#define F_GETLK 5
#define F_SETLK 6
#define F_SETLKW 7
#endif
#ifndef F_SETOWN
#define F_SETOWN 8
#define F_GETOWN 9
#endif
#ifndef F_SETSIG
#define F_SETSIG 10
#define F_GETSIG 11
#endif

#define FD_CLOEXEC 1


#ifndef F_RDLCK
#define F_RDLCK 0
#define F_WRLCK 1
#define F_UNLCK 2
#endif

#ifndef F_EXLCK
#define F_EXLCK 4
#define F_SHLCK 8
#endif

#ifndef F_INPROGRESS
#define F_INPROGRESS 16
#endif

#define LOCK_SH 1
#define LOCK_EX 2
#define LOCK_NB 4
#define LOCK_UN 8

#define LOCK_MAND 32
#define LOCK_READ 64
/* #define LOCK_WRITE 128 */
#define LOCK_RW 192

#define F_LINUX_SPECIFIC_BASE 1024

struct flock64 {
	short  l_type;
	short  l_whence;
	loff_t l_start;
	loff_t l_len;
	pid_t  l_pid;
	/*__ARCH_FLOCK64_PAD*/
};

#ifndef F_GETLK64
#define F_GETLK64 12
#define F_SETLK64 13
#define F_SETLKW64 14
#endif

__BEGIN_DECLS
_CRTIMP int fcntl(int fd, int cmd, ...);
__END_DECLS

#endif	/* Not _EMU_FCNTL_H_ */
