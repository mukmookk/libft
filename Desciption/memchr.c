
#include <string.h>
#include <stdio.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	target;

	i = 0;
	target = (unsigned char)c;
	while (i < n)
	{
		if (*(unsigned char*)s == target)
			return (void *)(s);
		s++;
		i++;
	}
	return (0);
}

int main () 
{ 
	char * pch; 
	char str[] = "Example string";
	pch = (char*) 
	memchr (str, 'p', strlen(str)); 
	if (pch!=NULL) 
		printf ("'p' found at position %ld.\n", pch-str+1); 
	else 
		printf ("'p' not found.\n"); 
		return 0; 
}

