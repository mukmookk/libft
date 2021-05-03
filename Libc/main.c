#include <stdio.h>
#include "libft.h"


int main()
{
	
	char testset[] = "Hello World!";

	ft_memset(testset, '!', 2);

	printf("%s", testset);
	
}