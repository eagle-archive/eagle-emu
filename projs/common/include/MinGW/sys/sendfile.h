#ifndef	_SYS_SENDFILE_H_
#define	_SYS_SENDFILE_H_

/* All the headers include this file. */
#include <_mingw.h>

__BEGIN_DECLS
extern ssize_t sendfile(int out_fd, int in_fd, off_t *offset, size_t count);
__END_DECLS

#endif	/* _SYS_SENDFILE_H_ */
