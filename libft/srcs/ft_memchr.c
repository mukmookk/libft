/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 04:36:05 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/05 05:09:33 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
