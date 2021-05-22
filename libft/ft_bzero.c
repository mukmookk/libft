/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 21:31:12 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/07 06:00:09 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	if (!s || n <= 0)
		return ;
	while (i < n || *(unsigned char *)(s + i))
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}
