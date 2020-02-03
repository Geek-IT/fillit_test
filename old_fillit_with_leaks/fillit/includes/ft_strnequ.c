/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquill <aquill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:16:42 by aquill            #+#    #+#             */
/*   Updated: 2020/01/21 15:28:38 by aquill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		while (*s1 == *s2 && n > 0)
		{
			if (*s1 == 0)
			{
				return (1);
			}
			s1++;
			s2++;
			n--;
		}
		if (n == 0 || (*s1 == 0 && *s2 == 0))
		{
			return (1);
		}
		return (0);
	}
	return (0);
}