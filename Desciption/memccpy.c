#include <stdio.h>

void			*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char	*n_dest;
	unsigned char	*n_src;
	int				target;
	size_t			i;

	n_dest	= dest;
	n_src	= (unsigned char *)src;
	target	= c;
	i		= 0;
	if (!dest && !src)
		return (0);
	while(i < len)
	{
		n_dest[i] = n_src[i];
		if (n_dest[i] == c)
			return (dest + i);
		i++;
	}
	return (0);
}

int main()
{
	char dst[10] = "qqqqqqq";
	char src[10] = "aaaa!aa";
	
	printf("Before processed	: %s\n", dst);

	ft_memccpy(dst, src, '@', sizeof(dst));
	printf("processed		: %s\n", dst);
}
