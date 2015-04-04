#ifndef _EMU_UNISTD_H
#define _EMU_UNISTD_H

#include <MinGW/include/unistd.h>
#include <sys/sysconf.h>

__BEGIN_DECLS

extern int symlink(const char *path1, const char *path2);
extern ssize_t readlink(__const char *__path, char *__buf, size_t __len);
extern int pipe(int *);
extern pid_t fork(void);
extern int fdatasync(int);
extern int fsync(int);
extern int ftruncate64(int, off64_t);
extern int setgid(gid_t);
extern gid_t getgid(void);
extern int setegid(gid_t);
extern gid_t getegid(void);
extern int seteuid(uid_t);
extern uid_t geteuid(void);
extern pid_t getppid(void);
extern int setuid(uid_t);
extern uid_t getuid (void);
extern ssize_t pread64 (int, void *, size_t, off64_t);
extern ssize_t pwrite64 (int, void *, size_t, off64_t);

__END_DECLS

#endif /* _EMU_UNISTD_H */
