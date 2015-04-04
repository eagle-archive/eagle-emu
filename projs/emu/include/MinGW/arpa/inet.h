#ifndef	_ARPA_INET_H_
#define	_ARPA_INET_H_

/* All the headers include this file. */
#include <_mingw.h>

__BEGIN_DECLS
extern int           inet_pton(int, const char *, void *);
const char * inet_ntop(int af, const void *src, char *dst, size_t size);
__END_DECLS

#endif	/* _ARPA_INET_H_ */
