/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquill <aquill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:16:42 by aquill            #+#    #+#             */
/*   Updated: 2020/01/21 15:52:44 by aquill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s_one;
	unsigned char *s_two;

	s_one = (unsigned char*)s1;
	s_two = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (*s_one == *s_two & n-- > 0)
	{
		s_one++;
		s_two++;
		if (n == 0)
			return (0);
	}
	if (*s_one != *s_two)
	{
		return (*s_one - *s_two);
	}
	return (0);
}
