/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 02:39:59 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/07 06:12:31 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char			*source;
	char			*to_find;
	size_t			i;

	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	source = (char *)haystack;
	to_find = (char *)needle;
	while (i < len)
	{
		if (*to_find == '\0')
			return (source - (to_find - needle));
		if (*source == *to_find)
			to_find++;
		else
			to_find = (char *)needle;
		if (*source == '\0')
			break ;
		source++;
		i++;
	}
	return (0);
}
