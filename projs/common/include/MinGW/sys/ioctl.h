#ifndef _SYS_IOCTL_H_
#define _SYS_IOCTL_H_

/* All the headers include this file. */
#include <_mingw.h>

typedef struct {
 unsigned int clock_rate;
 unsigned int clock_type;
 unsigned short loopback;
} sync_serial_settings;

typedef struct {
 unsigned int clock_rate;
 unsigned int clock_type;
 unsigned short loopback;
 unsigned int slot_map;
} te1_settings;

typedef struct {
 unsigned short encoding;
 unsigned short parity;
} raw_hdlc_proto;

typedef struct {
 unsigned int t391;
 unsigned int t392;
 unsigned int n391;
 unsigned int n392;
 unsigned int n393;
 unsigned short lmi;
 unsigned short dce;
} fr_proto;

typedef struct {
 unsigned int dlci;
} fr_proto_pvc;

typedef struct {
 unsigned int dlci;
 char master[IFNAMSIZ];
}fr_proto_pvc_info;

typedef struct {
 unsigned int interval;
 unsigned int timeout;
} cisco_proto;

__BEGIN_DECLS
extern int ioctl(int, int, ...);
__END_DECLS

#endif	/* Not _SYS_IOCTL_H_ */
