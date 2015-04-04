#ifndef _EMU_DIRENT_H_
#define _EMU_DIRENT_H_

#include <MinGW/include/dirent.h>

__BEGIN_DECLS
int __cdecl __MINGW_NOTHROW readdir_r (DIR *__dirp, struct dirent *__entry, struct dirent **__result);
__END_DECLS

#endif	/* Not _EMU_DIRENT_H_ */
