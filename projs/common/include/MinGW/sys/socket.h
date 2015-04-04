#ifndef	_SYS_SOCKET_H_
#define	_SYS_SOCKET_H_

/* All the headers include this file. */
#include <_mingw.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* from <linux/sockios.h>  */
#define SIOCGIFADDR 0x8915
#define SIOCGIFDSTADDR 0x8917
#define SIOCGIFBRDADDR 0x8919
#define SIOCGIFNETMASK 0x891b



#define AF_PACKET 17
#define PF_PACKET AF_PACKET

#define MSG_CTRUNC 8
#define MSG_EOR 0x80
#define MSG_TRUNC 0x20
#define MSG_WAITALL 0x100

/* BIONIC: second argument to shutdown() */
enum {
    SHUT_RD = 0,        /* no more receptions */
#define SHUT_RD         SHUT_RD
    SHUT_WR,            /* no more transmissions */
#define SHUT_WR         SHUT_WR
    SHUT_RDWR           /* no more receptions or transmissions */
#define SHUT_RDWR       SHUT_RDWR
};

#define SO_BINDTODEVICE 25

__BEGIN_DECLS
__END_DECLS

#endif /* _SYS_SOCKET_H_ */
