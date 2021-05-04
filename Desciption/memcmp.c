
#include <stdio.h>
#include <string.h>

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*n_s1;
	unsigned char		*n_s2;
	size_t				i;

	n_s1 = (unsigned char *)(s1);
	n_s2 = (unsigned char *)(s2);
	i = 0;
	while (i < n)
	{
		if (*n_s1 != *n_s2)
			return (*n_s1 - *n_s2);
		n_s1++;
		n_s2++;
		i++;
	}
	return (0);
}

int main()
{
	char s1[] = "aaaaaaaaaa";
	char s2[] = "aaaaaaaaaa";
	char s3[] = "aaaaaaaaaa";


	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", memcmp(s1, s2, 5));


}