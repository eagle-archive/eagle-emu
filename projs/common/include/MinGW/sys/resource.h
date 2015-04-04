#ifndef	_SYS_RESOURCE_H_
#define	_SYS_RESOURCE_H_

/* All the headers include this file. */
#include <_mingw.h>

#ifndef RLIMIT_NOFILE
#define RLIMIT_NOFILE 7
#endif

struct rlimit {
 unsigned long rlim_cur;
 unsigned long rlim_max;
};


__BEGIN_DECLS

_CRTIMP int getrlimit (int resource, struct rlimit *rlp);

__END_DECLS

#endif	/* _SYS_RESOURCE_H_ */
