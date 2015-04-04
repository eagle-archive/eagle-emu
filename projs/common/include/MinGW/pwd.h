#ifndef	_PWD_H_
#define	_PWD_H_

/* All the headers include this file. */
#include <_mingw.h>

struct passwd
{
    char *pw_name;
    char *pw_passwd;
    unsigned int/*__uid_t*/ pw_uid;
    unsigned int/*__gid_t*/ pw_gid;
    char *pw_gecos;
    char *pw_dir;
    char *pw_shell;
};

__BEGIN_DECLS
int getpwnam_r(const char*, struct passwd*, char*, size_t, struct passwd**);
int getpwuid_r(uid_t, struct passwd*, char*, size_t, struct passwd**);
__END_DECLS

#endif	/* _PWD_H_ */
