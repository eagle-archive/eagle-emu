#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

EXTERN_C int
vasprintf( char **sptr, const char *fmt, va_list argv )
{
    int wanted = vsnprintf( *sptr = NULL, 0, fmt, argv );
    if( (wanted > 0) && ((*sptr = (char *)malloc( 1 + wanted )) != NULL) )
        return vsprintf( *sptr, fmt, argv );

    return wanted;
}

EXTERN_C int
asprintf( char **sptr, const char *fmt, ... )
{
    int retval;
    va_list argv;
    va_start( argv, fmt );
    retval = vasprintf( sptr, fmt, argv );
    va_end( argv );
    return retval;
}
