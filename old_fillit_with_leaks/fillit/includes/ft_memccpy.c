/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquill <aquill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:16:42 by aquill            #+#    #+#             */
/*   Updated: 2020/01/21 15:51:06 by aquill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
					int c, size_t n)
{
	unsigned char *x;
	unsigned char *y;

	x = (unsigned char*)src;
	y = (unsigned char*)dst;
	while (n-- > 0)
	{
		*y = *x;
		if (*x == (unsigned char)c)
			return ((void*)y + 1);
		x++;
		y++;
	}
	return (NULL);
}
