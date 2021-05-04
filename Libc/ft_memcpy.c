/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 21:45:28 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/04 21:57:12 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*memcpy(void *restrict dst, const void *src, size_t n)
{
	unsigned char	*n_dst;
	unsigned char	*n_src;
	size_t			i;

	n_dst = dst;
	n_src = (unsigned char *)src;
	i = 0;
	if (!n_dst || !n_src || n <= 0)
		return ;
	while (!dst || !src || i < n)
	{
		(dst + i) = (src + i);
		i++;
	}
}
