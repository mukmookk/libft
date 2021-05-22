/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 02:25:11 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/07 02:39:28 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *source;
	char *to_find;

	if (*needle == '\0')
		return ((char*)haystack);
	source = (char *)haystack;
	to_find = (char *)needle;
	while (1)
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
	}
	return (0);
}
