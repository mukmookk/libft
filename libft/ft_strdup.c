/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 01:03:45 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/07 06:09:51 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int		len_str;
	char	*str_dup;
	int		i;

	i = 0;
	len_str = ft_strlen(s1);
	if ((str_dup = (char *)(malloc)(sizeof(char) * len_str + 1)) == NULL)
		return (0);
	while (s1[i])
	{
		str_dup[i] = s1[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
