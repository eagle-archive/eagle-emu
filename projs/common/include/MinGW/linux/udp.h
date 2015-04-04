#ifndef	_LINUX_UDP_H
#define	_LINUX_UDP_H

/* All the headers include this file. */
#include <_mingw.h>

struct udphdr {
 unsigned short source;
 unsigned short dest;
 unsigned short len;
 unsigned short check;
};

__BEGIN_DECLS
__END_DECLS

#endif	/* _LINUX_UDP_H */
