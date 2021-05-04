/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 01:14:34 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/05 02:58:50 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char	*n_dest;
	unsigned char	*n_src;
	int				target;
	size_t			i;

	n_dest = dst;
	n_src = (unsigned char *)src;
	target = c;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < len)
	{
		n_dest[i] = n_src[i];
		if (n_dest[i] == c)
			return (dst + i);
		i++;
	}
	return (0);
}
