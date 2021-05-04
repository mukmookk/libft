/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:00:57 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/04 22:10:02 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*n_dst;
	unsigned char	*n_src;
	size_t			i;

	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	i = 0;
	if (!n_dst || !n_src || n <= 0)
		return (dst);
	while (!dst || !src || i < n)
	{
		*n_dst++ = *n_src++;
		i++;
	}
	return (dst);
}
