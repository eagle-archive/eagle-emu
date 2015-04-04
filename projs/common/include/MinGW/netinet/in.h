#ifndef	_NETINET_IN_H_
#define	_NETINET_IN_H_

/* All the headers include this file. */
#include <_mingw.h>
#include <sys/socket.h>
#include <netinet/in6.h>

#define MCAST_JOIN_GROUP 42
#define MCAST_LEAVE_GROUP 45

struct ip_mreqn
{
 struct in_addr imr_multiaddr;
 struct in_addr imr_address;
 int imr_ifindex;
};

struct group_req
{
	__u32				 gr_interface;	/* interface index */
	struct /*__kernel_sockaddr_storage*/ sockaddr_storage gr_group;	/* group address */
};

__BEGIN_DECLS
__END_DECLS

#endif	/* _NETINET_IN_H_ */
