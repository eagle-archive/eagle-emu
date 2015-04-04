#ifndef _EMU_STRING_H_
#define	_EMU_STRING_H_

#include <MinGW/include/string.h>

__BEGIN_DECLS

extern char* strtok_r (char*, const char*, char**);
extern int strerror_r(int errnum, char *buf, size_t n);
extern char* strsep(char **, const char *);

__END_DECLS

#endif	/* Not _EMU_STRING_H_ */
