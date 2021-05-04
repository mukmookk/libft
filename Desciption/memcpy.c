#include <stdio.h>
#include <string.h>

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
		printf("Ends\n");
		return (dst);
	}
	while (i < n)
	{
		*n_dst++ = *n_src++;
		i++;
	}
	return (dst);
}


int main()
{
	char *dst;
	char *src;
	
	dst = NULL;
	src = NULL;

	printf("Before processed	: %s\n", dst);

	ft_memcpy(dst, src, 9 * sizeof(char));
	printf("processed		: %s\n", dst);
}

