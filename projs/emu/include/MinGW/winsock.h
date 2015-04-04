#ifndef _EMU_WINSOCK_H
#define	_EMU_WINSOCK_H

__BEGIN_DECLS
int _pascal getsockopt(/*SOCKET*/unsigned int,int,int,/* char* */void*,int*);
int _pascal setsockopt(/*SOCKET*/unsigned int,int,int,/*const char* */const void*,int);
__END_DECLS

#define getsockopt  getsockopt_mingw
#define setsockopt  setsockopt_mingw
#include <MinGW/include/winsock.h>
#undef getsockopt
#undef setsockopt

#endif /* _EMU_WINSOCK_H */
