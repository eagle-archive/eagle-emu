#ifndef	_NET_IF_H_
#define	_NET_IF_H_

/* All the headers include this file. */
#include <_mingw.h>
#include <sys/socket.h>

#define IFNAMSIZ 16
#include <sys/ioctl.h>


//#define IFF_UP 0x1
//#define IFF_BROADCAST 0x2
#define IFF_DEBUG 0x4
//#define IFF_LOOPBACK 0x8
#define IFF_POINTOPOINT 0x10
#define IFF_NOTRAILERS 0x20
#define IFF_RUNNING 0x40
#define IFF_NOARP 0x80
#define IFF_PROMISC 0x100
#define IFF_ALLMULTI 0x200

#define IFF_MASTER 0x400
#define IFF_SLAVE 0x800

//#define IFF_MULTICAST 0x1000

#define IFF_PORTSEL 0x2000
#define IFF_AUTOMEDIA 0x4000
#define IFF_DYNAMIC 0x8000

#define IFF_LOWER_UP 0x10000
#define IFF_DORMANT 0x20000

#define IFF_ECHO 0x40000

#define IFF_VOLATILE (IFF_LOOPBACK|IFF_POINTOPOINT|IFF_BROADCAST|IFF_ECHO|  IFF_MASTER|IFF_SLAVE|IFF_RUNNING|IFF_LOWER_UP|IFF_DORMANT)

#define IFF_802_1Q_VLAN 0x1
#define IFF_EBRIDGE 0x2
#define IFF_SLAVE_INACTIVE 0x4
#define IFF_MASTER_8023AD 0x8
#define IFF_MASTER_ALB 0x10
#define IFF_BONDING 0x20
#define IFF_SLAVE_NEEDARP 0x40
#define IFF_ISATAP 0x80
#define IFF_MASTER_ARPMON 0x100
#define IFF_WAN_HDLC 0x200
#define IFF_XMIT_DST_RELEASE 0x400
#define IFF_DONT_BRIDGE 0x800
#define IFF_IN_NETPOLL 0x1000
#define IFF_DISABLE_NETPOLL 0x2000


struct ifmap {
	unsigned long mem_start;
	unsigned long mem_end;
	unsigned short base_addr;
	unsigned char irq;
	unsigned char dma;
	unsigned char port;
	/* 3 bytes spare */
};


struct if_settings {
 unsigned int type;
 unsigned int size;
 union {

 raw_hdlc_proto *raw_hdlc;
 cisco_proto *cisco;
 fr_proto *fr;
 fr_proto_pvc *fr_pvc;
 fr_proto_pvc_info *fr_pvc_info;

 sync_serial_settings *sync;
 te1_settings *te1;
 } ifs_ifsu;
};

struct ifreq {
#define IFHWADDRLEN 6
 union
 {
 char ifrn_name[IFNAMSIZ];
 } ifr_ifrn;

 union {
 struct sockaddr ifru_addr;
 struct sockaddr ifru_dstaddr;
 struct sockaddr ifru_broadaddr;
 struct sockaddr ifru_netmask;
 struct sockaddr ifru_hwaddr;
 short ifru_flags;
 int ifru_ivalue;
 int ifru_mtu;
 struct ifmap ifru_map;
 char ifru_slave[IFNAMSIZ];
 char ifru_newname[IFNAMSIZ];
 void * ifru_data;
 struct if_settings ifru_settings;
 } ifr_ifru;
};

#define ifr_name	ifr_ifrn.ifrn_name	/* interface name 	*/
#define ifr_hwaddr	ifr_ifru.ifru_hwaddr	/* MAC address 		*/
#define	ifr_addr	ifr_ifru.ifru_addr	/* address		*/
#define	ifr_dstaddr	ifr_ifru.ifru_dstaddr	/* other end of p-p lnk	*/
#define	ifr_broadaddr	ifr_ifru.ifru_broadaddr	/* broadcast address	*/
#define	ifr_netmask	ifr_ifru.ifru_netmask	/* interface net mask	*/
#define	ifr_flags	ifr_ifru.ifru_flags	/* flags		*/
#define	ifr_metric	ifr_ifru.ifru_ivalue	/* metric		*/
#define	ifr_mtu		ifr_ifru.ifru_mtu	/* mtu			*/
#define ifr_map		ifr_ifru.ifru_map	/* device map		*/
#define ifr_slave	ifr_ifru.ifru_slave	/* slave device		*/
#define	ifr_data	ifr_ifru.ifru_data	/* for use by interface	*/
#define ifr_ifindex	ifr_ifru.ifru_ivalue	/* interface index	*/
#define ifr_bandwidth	ifr_ifru.ifru_ivalue    /* link bandwidth	*/
#define ifr_qlen	ifr_ifru.ifru_ivalue	/* Queue length 	*/
#define ifr_newname	ifr_ifru.ifru_newname	/* New name		*/
#define ifr_settings	ifr_ifru.ifru_settings	/* Device/proto settings*/

#ifndef IF_NAMESIZE
#define IF_NAMESIZE IFNAMSIZ
#endif

__BEGIN_DECLS
extern unsigned int if_nametoindex(const char *);
extern char*        if_indextoname(unsigned ifindex, char *ifname);
__END_DECLS

#endif	/* _NET_IF_H_ */
