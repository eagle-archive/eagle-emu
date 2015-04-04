#ifndef	_NETDB_H_
#define	_NETDB_H_

/* All the headers include this file. */
#include <_mingw.h>
#include <ws2tcpip.h>


/*
 * Error return codes from gethostbyname() and gethostbyaddr()
 * (left in h_errno).
 */

#define	NETDB_INTERNAL	-1	/* see errno */
#define	NETDB_SUCCESS	0	/* no problem */
//#define	HOST_NOT_FOUND	1 /* Authoritative Answer Host not found */
//#define	TRY_AGAIN	2 /* Non-Authoritative Host not found, or SERVERFAIL */
//#define	NO_RECOVERY	3 /* Non recoverable errors, FORMERR, REFUSED, NOTIMP */
//#define	NO_DATA		4 /* Valid name, no data record of requested type */
//#define	NO_ADDRESS	NO_DATA		/* no address, look for MX record */

/*
 * Error return codes from getaddrinfo()
 */
#define	EAI_ADDRFAMILY	 1	/* address family for hostname not supported */
//#define	EAI_AGAIN	 2	/* temporary failure in name resolution */
//#define	EAI_BADFLAGS	 3	/* invalid value for ai_flags */
//#define	EAI_FAIL	 4	/* non-recoverable failure in name resolution */
//#define	EAI_FAMILY	 5	/* ai_family not supported */
//#define	EAI_MEMORY	 6	/* memory allocation failure */
//#define	EAI_NODATA	 7	/* no address associated with hostname */
//#define	EAI_NONAME	 8	/* hostname nor servname provided, or not known */
//#define	EAI_SERVICE	 9	/* servname not supported for ai_socktype */
//#define	EAI_SOCKTYPE	10	/* ai_socktype not supported */
#define	EAI_SYSTEM	11	/* system error returned in errno */
#define	EAI_BADHINTS	12	/* invalid value for hints */
#define	EAI_PROTOCOL	13	/* resolved protocol is unknown */
#define	EAI_OVERFLOW	14	/* argument buffer overflow */
#define	EAI_MAX		15

/*
 * Flag values for getaddrinfo()
 */
//#define	AI_PASSIVE	0x00000001 /* get address to use bind() */
//#define	AI_CANONNAME	0x00000002 /* fill ai_canonname */
//#define	AI_NUMERICHOST	0x00000004 /* prevent host name resolution */
#define	AI_NUMERICSERV	0x00000008 /* prevent service name resolution */
/* valid flags for addrinfo (not a standard def, apps should not use it) */
#define AI_MASK \
    (AI_PASSIVE | AI_CANONNAME | AI_NUMERICHOST | AI_NUMERICSERV | \
    AI_ADDRCONFIG)

#define	AI_ALL		0x00000100 /* IPv6 and IPv4-mapped (with AI_V4MAPPED) */
#define	AI_V4MAPPED_CFG	0x00000200 /* accept IPv4-mapped if kernel supports */
#define	AI_ADDRCONFIG	0x00000400 /* only if any address is assigned */
#define	AI_V4MAPPED	0x00000800 /* accept IPv4-mapped IPv6 address */
/* special recommended flags for getipnodebyname */
#define	AI_DEFAULT	(AI_V4MAPPED_CFG | AI_ADDRCONFIG)

/*
 * Constants for getnameinfo()
 */
#define	NI_MAXHOST	1025
#define	NI_MAXSERV	32

/*
 * Flag values for getnameinfo()
 */
//#define	NI_NOFQDN	0x00000001
//#define	NI_NUMERICHOST	0x00000002
//#define	NI_NAMEREQD	0x00000004
//#define	NI_NUMERICSERV	0x00000008
//#define	NI_DGRAM	0x00000010

__BEGIN_DECLS
__END_DECLS

#endif	/* _NETDB_H_ */
