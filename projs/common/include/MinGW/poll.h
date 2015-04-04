#ifndef	_POLL_H_
#define	_POLL_H_

/* All the headers include this file. */
#include <_mingw.h>

#define POLLIN 0x0001
#define POLLPRI 0x0002
#define POLLOUT 0x0004
#define POLLERR 0x0008
#define POLLHUP 0x0010
#define POLLNVAL 0x0020

#define POLLRDNORM 0x0040
#define POLLRDBAND 0x0080
#define POLLWRNORM 0x0100
#define POLLWRBAND 0x0200

struct pollfd {
 int fd;
 short events;
 short revents;
};

__BEGIN_DECLS
typedef unsigned int  nfds_t;
extern int poll(struct pollfd *, nfds_t, long);
__END_DECLS

#endif	/* _POLL_H_ */
