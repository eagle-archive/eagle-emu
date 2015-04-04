
#include <stdlib.h>
#include <string.h>
#include <errno.h>

static char*
win32_strsep(char**  pline, const char*  delim)
{
    char*  line = *pline;
    char*  p    = line;

    if (p == NULL)
        return NULL;

    for (;;) {
        int          c = *p++;
        const char*  q = delim;

        if (c == 0) {
            p = NULL;
            break;
        }

        while (*q) {
            if (*q == c) {
                p[-1] = 0;
                goto Exit;
            }
            q++;
        }
    }
Exit:
    *pline = p;
    return line;
}


/*
 * Copy src to string dst of size siz.  At most siz-1 characters
 * will be copied.  Always NUL terminates (unless siz == 0).
 * Returns strlen(src); if retval >= siz, truncation occurred.
 */
static size_t
strlcpy(char *dst, const char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;

	/* Copy as many bytes as will fit */
	if (n != 0) {
		while (--n != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
    }

	/* Not enough room in dst, add NUL and traverse rest of src */
	if (n == 0) {
		if (siz != 0)
			*d = '\0';		/* NUL-terminate dst */
		while (*s++)
			;
	}

	return(s - src - 1);	/* count does not include NUL */
}


static size_t
__digits10(unsigned int num)
{
	size_t i = 0;

	do {
		num /= 10;
		i++;
	} while (num != 0);

	return i;
}

static int
__itoa(int num, int sign, char *buffer, size_t start, size_t end)
{
	size_t pos;
	unsigned int a;
	int neg;

	if (sign && num < 0) {
		a = -num;
		neg = 1;
	}
	else {
		a = num;
		neg = 0;
	}

	pos = start + __digits10(a);
	if (neg)
	    pos++;

	if (pos < end)
		buffer[pos] = '\0';
	else
		return ERANGE;
	pos--;
	do {
		buffer[pos] = (a % 10) + '0';
		pos--;
		a /= 10;
	} while (a != 0);
	if (neg)
		buffer[pos] = '-';
	return 0;
}

EXTERN_C char *
strsep(char **stringp, const char *delim)
{
    return win32_strsep(stringp, delim);
}

EXTERN_C int
strerror_r(int errnum, char *strerrbuf, size_t buflen)
{
    int len, ret = 0;
    const char* msg;
    msg = strerror(errnum);
    if (msg) {
        len = strlcpy(strerrbuf, msg, buflen);
        if ((size_t)len >= buflen)
            ret = ERANGE;
    } else {
        len = strlcpy(strerrbuf, "Unknown error: ", buflen);
        if ((size_t)len >= buflen)
            ret = ERANGE;
        else {
            int  ret = __itoa(errnum, 1, strerrbuf, len, buflen);
            if (ret == 0)
                ret = EINVAL;
        }
    }
    return ret;
}
