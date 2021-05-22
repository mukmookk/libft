/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 01:41:21 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/07 06:06:55 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*n_dst;
	char		*n_src;
	int			dst_length;
	int			remaining;

	n_dst = dest;
	n_src = (char *)src;
	while (size-- > 0 && *n_dst)
		n_dst++;
	dst_length = n_dst - dest;
	remaining = size - dst_length;
	if (remaining == 0)
		return (dst_length + ft_strlen(src));
	while (*src)
	{
		if (remaining > 1)
		{
			*n_dst++ = *n_src;
			remaining--;
		}
		src++;
	}
	*n_dst = '\0';
	return (dst_length + (n_src - src));
}
