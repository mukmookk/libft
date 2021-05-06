#include "libft.h"

char    *ft_strdup(char *src)
{
    int len_str;
    char *str_dup;
    int i;

    len_str = ft_strlen(src);
    if (str_dup = (char *)(malloc)(sizeof(char) * len_str + 1))
        return (0);
    if (str_dup == 0)
        return (NULL);
    while (src[i])
    {
        str_dup[i] = src[i];
        i++;
    }
    str_dup[i] = '\0';
    return (str_dup);
}