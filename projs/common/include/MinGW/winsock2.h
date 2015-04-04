#ifndef _EMU_WINSOCK2_H
#define	_EMU_WINSOCK2_H

#include <windows.h>

#ifdef __W32API_USE_DLLIMPORT__
#define WINSOCK_API_LINKAGE DECLSPEC_IMPORT
#else
#define WINSOCK_API_LINKAGE
#endif

__BEGIN_DECLS
WINSOCK_API_LINKAGE int PASCAL getsockopt(/*SOCKET*/unsigned int,int,int,/* char* */void*,int*);
WINSOCK_API_LINKAGE int PASCAL setsockopt(/*SOCKET*/unsigned int,int,int,/* const char* */const void*,int);
__END_DECLS

#define getsockopt  getsockopt_mingw
#define setsockopt  setsockopt_mingw
#include <MinGW/include/winsock2.h>
#undef getsockopt
#undef setsockopt

#endif /* _EMU_WINSOCK2_H */
