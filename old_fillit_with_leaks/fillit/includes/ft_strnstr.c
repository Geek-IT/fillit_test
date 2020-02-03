/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquill <aquill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:16:42 by aquill            #+#    #+#             */
/*   Updated: 2020/01/21 18:17:18 by aquill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t x;
	size_t y;

	x = 0;
	if (*needle == 0)
		return ((char*)haystack);
	while (haystack[x] != 0 && x < len)
	{
		y = 0;
		while (haystack[x + y] == needle[y] && needle[y] != 0 && y + x < len)
			y++;
		if (y == ft_strlen(needle))
			return ((char*)&haystack[x]);
		x++;
	}
	return (NULL);
}
