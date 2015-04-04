#ifndef	_BYTESWAP_H_
#define	_BYTESWAP_H_

/* All the headers include this file. */
#include <_mingw.h>

/* endian.h rather than sys/endian.h so we get the machine-specific file. */
#include <endian.h>

#define  bswap_16(x)   swap16(x)
#define  bswap_32(x)   swap32(x)
#define  bswap_64(x)   swap64(x)

#endif	/* _BYTESWAP_H_ */
