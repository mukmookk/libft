/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 01:25:58 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/07 06:12:59 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	char			*n_dst;
	char			*n_src;
	size_t			i;

	n_dst = dst;
	n_src = (char *)src;
	i = 0;
	while (*src && i < len)
	{
		*n_src = *n_dst;
		n_src++;
		n_dst++;
		i++;
	}
	*n_dst = '\0';
	return (dst);
}
