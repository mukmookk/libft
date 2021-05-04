#include <stdio.h>

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*n_dst;
	unsigned char	*n_src;
	size_t			i;

	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	i = 0;
	if (!n_dst || !n_src || n <= 0)
		return dst;
	while (!dst || !src || i < n)
	{
		*n_dst++ = *n_src++;
		i++;
	}
	return dst;
}

int main()
{
	char dst[20];
	char src[20] = "copy this\0";

	printf("Before processed	: %s\n", dst);

	ft_memcpy(dst, src, 10);
	printf("processed		: %s\n", dst);
}
