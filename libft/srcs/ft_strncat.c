/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 01:30:46 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/07 06:12:46 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strncat(char *dest, char *src, size_t n)
{
	char				*n_dst;
	char				*n_src;
	size_t				i;

	n_dst = dest;
	n_src = src;
	i = 0;
	while (*dest)
		dest++;
	while (*src && i < n)
	{
		*n_dst = *n_src;
		n_dst++;
		n_src++;
		i++;
	}
	*n_dst = '\0';
	return (dest);
}
