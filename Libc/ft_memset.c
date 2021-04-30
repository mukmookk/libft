// dst
//     A pointer to the memory that you want to set.
// c
//     The value that you want to store in each byte.
// length
//     The number of bytes to set.


// The memset() function fills length bytes starting at dst with the value c. The memset_isr() function is similar, but it's safe for you to use it in an interrupt service routine.

// A pointer to the destination buffer (that is, the value of dst).

#include "libft.h"

void        *ft_memset(void *b, int c, size_t len)
{
    size_t                  i;

    if (!b)
        return (NULL);

    i = 0;
    while (i < len)
    {
        *(unsigned char*)(b + i) = (unsigned char)c;
        i++;
    }
    return (b);
}