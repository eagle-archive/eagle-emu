#ifndef	_SYS_VFS_H_
#define	_SYS_VFS_H_

/* All the headers include this file. */
#include <_mingw.h>

struct statfs {
    uint32_t        f_type;
    uint32_t        f_bsize;
    uint64_t        f_blocks;
    uint64_t        f_bfree;
    uint64_t        f_bavail;
    uint64_t        f_files;
    uint64_t        f_ffree;
    __kernel_fsid_t f_fsid;
    uint32_t        f_namelen;
    uint32_t        f_frsize;
    uint32_t        f_spare[5];
};

__BEGIN_DECLS
extern int statfs(const char *, struct statfs *);
extern int fstatfs(int, struct statfs *);
__END_DECLS

#endif	/* _SYS_VFS_H_ */
