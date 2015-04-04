#ifndef	_TERMIOS_H_
#define	_TERMIOS_H_

/* All the headers include this file. */
#include <_mingw.h>

typedef unsigned char   cc_t;
typedef unsigned int    speed_t;
typedef unsigned int    tcflag_t;

#define NCCS 19
struct termios {
    tcflag_t c_iflag;		/* input mode flags */
    tcflag_t c_oflag;		/* output mode flags */
    tcflag_t c_cflag;		/* control mode flags */
    tcflag_t c_lflag;		/* local mode flags */
    cc_t c_line;			/* line discipline */
    cc_t c_cc[NCCS];		/* control characters */
};

#define ECHO 0000010
#define ECHOE 0000020
#define ECHOK 0000040
#define ECHONL 0000100

#define TCSAFLUSH 2

__BEGIN_DECLS
extern int tcgetattr(int fd, struct termios *s);
extern int tcsetattr(int fd, int __opt, const struct termios *s);
__END_DECLS

#endif	/* _TERMIOS_H_ */
