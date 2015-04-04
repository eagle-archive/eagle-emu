#include <sys/mman.h>
#include <stdio.h>
#include <assert.h>
#include <windows.h>

static HANDLE _get_osfhandle(int fd)
{
    // TODO: implementation
    assert(false);
    return NULL;
}

extern "C"
void *mmap(void *start, size_t length, int prot, int flags, int fd, off_t offset)
{
    HANDLE handle;
/*
    if (start != NULL || !(flags & MAP_PRIVATE))
        die("Invalid usage of mingw_mmap");

    if (offset % getpagesize() != 0)
        die("Offset does not match the memory allocation granularity");
*/


    handle = CreateFileMapping((HANDLE)_get_osfhandle(fd), NULL, PAGE_WRITECOPY,
        0, 0, NULL);

    if (handle != NULL)
    {
        start = MapViewOfFile(handle, FILE_MAP_COPY, 0, offset, length);
        CloseHandle(handle);
    }
    else
    {
        start = MAP_FAILED;
    }

    return start;
}

extern "C"
int munmap(void *start, size_t length)
{
    UnmapViewOfFile(start);
    return 0;
}
