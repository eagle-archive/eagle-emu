#ifndef	_NETINET_IP_H_
#define	_NETINET_IP_H_

/* All the headers include this file. */
#include <_mingw.h>
#include <endian.h>

struct iphdr {
#if defined(__LITTLE_ENDIAN_BITFIELD)
	uint8_t  ihl    :4,
		 version:4;
#elif defined (__BIG_ENDIAN_BITFIELD)
	uint8_t  version:4,
		 ihl    :4;
#else
#error	"Please fix <asm/byteorder.h>"
#endif
	uint8_t	  tos;
	uint16_t  tot_len;
	uint16_t  id;
	uint16_t  frag_off;
	uint8_t   ttl;
	uint8_t   protocol;
	uint16_t  check;
	int32_t   saddr;
	int32_t   daddr;
};

__BEGIN_DECLS
__END_DECLS

#endif	/* _NETINET_IP_H_ */
