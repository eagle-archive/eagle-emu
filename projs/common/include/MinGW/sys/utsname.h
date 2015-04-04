#ifndef	_SYS_UTSNAME_H_
#define	_SYS_UTSNAME_H_

/* All the headers include this file. */
#include <_mingw.h>

#define SYS_NMLN 65

struct utsname {
    char  sysname   [SYS_NMLN];
    char  nodename  [SYS_NMLN];
    char  release   [SYS_NMLN];
    char  version   [SYS_NMLN];
    char  machine   [SYS_NMLN];
    char  domainname[SYS_NMLN];
};

extern int uname(struct utsname *);

#endif	/* _SYS_UTSNAME_H_ */
