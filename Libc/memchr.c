
// MEMCHR(3)                BSD Library Functions Manual                MEMCHR(3)

// NAME
//      memchr -- locate byte in byte string

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      void *
//      memchr(const void *s, int c, size_t n);

// DESCRIPTION
//      The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.

// RETURN VALUES
//      The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.

// SEE ALSO
//      strchr(3), strcspn(3), strpbrk(3), strrchr(3), strsep(3), strspn(3), strstr(3), strtok(3), wmemchr(3)

// STANDARDS
//      The memchr() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              April 9, 2008                             BSD
// (END)