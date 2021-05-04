#include <stddef.h>
#include<string.h>
#include<stdio.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*n_dst;
	unsigned char		*n_src;

	if (n_dst <= n_src)
	{
		n_dst = dst;
		n_src = (unsigned char*)src;
		while (len--)
			*n_dst++ = *n_src++;
	}
	else
	{
		n_dst = dst + len;
		n_src = (unsigned char*)src;
		n_src += len;
		while (len--)
			*(--n_dst) = *(--n_src);
	}
	return (dst);
}

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*n_dst;
	unsigned char	*n_src;
	size_t			i;

	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	i = 0;
	if (!n_dst && !n_src)
	{
		return (dst);
	}
	while (i < n)
	{
		*n_dst++ = *n_src++;
		i++;
	}
	return (dst);
}

int main(void)
{
    char str1[] = "ABCDEFG";
 
	// memcpy
    memcpy(str1 + 2, str1, sizeof(char) * 5);
    printf("memcpy		: %s\n", str1);

	char str2[] = "ABCDEFG";

	// memmove
    memmove(str2 + 2, str2, sizeof(char) * 5);
    printf("memmove		: %s\n", str2);
    return 0;
}
