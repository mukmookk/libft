// MEMCPY(3)                BSD Library Functions Manual                MEMCPY(3)

// NAME
//      memcpy -- copy memory area

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      void *
//      memcpy(void *restrict dst, const void *restrict src, size_t n);

// DESCRIPTION
//      The memcpy() function copies n bytes from memory area src to memory area dst.  If dst
//      and src overlap, behavior is undefined.  Applications in which dst and src might over-
//      lap should use memmove(3) instead.

// RETURN VALUES
//      The memcpy() function returns the original value of dst.

// SEE ALSO
//      bcopy(3), memccpy(3), memmove(3), strcpy(3), wmemcpy(3)

// STANDARDS
//      The memcpy() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              June 4, 1993                              BSD
// (END)


