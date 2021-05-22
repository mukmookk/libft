/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:00:57 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/07 07:12:58 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *s, int c, size_t len)
{
	size_t i;

	i = 0;
	if (!s || len <= 0)
		return (s);
	while (i < len || *(unsigned char *)(s + i))
	{
		*(unsigned char *)(s + i) = c;
		i++;
	}
	return (s);
}
