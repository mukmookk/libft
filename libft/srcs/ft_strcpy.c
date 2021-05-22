/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 01:19:54 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/07 06:05:51 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dst, const char *src)
{
	char		*n_dst;
	char		*n_src;

	n_dst = dst;
	n_src = (char *)src;
	while (*n_src)
	{
		*n_dst = *n_src;
		n_dst++;
		n_src++;
	}
	*n_dst = '\0';
	return (dst);
}
