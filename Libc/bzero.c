
// BZERO(3)                 BSD Library Functions Manual                 BZERO(3)

// NAME
//      bzero -- write zeroes to a byte string

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <strings.h>

//      void
//      bzero(void *s, size_t n);

// DESCRIPTION
//      The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.

// SEE ALSO
//      memset(3), swab(3)

// HISTORY
//      A bzero() function appeared in 4.3BSD.  Its prototype existed previously in <string.h> before it was moved to <strings.h> for IEEE Std 1003.1-2001 (``POSIX.1'') compliance.

//      bzero() was deprecated in IEEE Std 1003.1-2001 (``POSIX.1'') and removed in IEEE Std 1003.1-2008 (``POSIX.1'').

// BSD                              June 4, 1993                              BSD
// ~
// ~
// ~
// ~
// ~
// ~
// ~
// ~
// ~
// ~
// ~
// (END)