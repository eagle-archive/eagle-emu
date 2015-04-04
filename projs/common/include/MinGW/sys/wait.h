#ifndef	_SYS_WAIT_H_
#define	_SYS_WAIT_H_

/* All the headers include this file. */
#include <_mingw.h>

#define WNOHANG 0x00000001
#define WUNTRACED 0x00000002
#define WSTOPPED WUNTRACED
#define WEXITED 0x00000004
#define WCONTINUED 0x00000008
#define WNOWAIT 0x01000000

__BEGIN_DECLS
extern pid_t  waitpid(pid_t, int *, int);
__END_DECLS

#endif	/* _SYS_WAIT_H_ */
