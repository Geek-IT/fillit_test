/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquill <aquill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:16:42 by aquill            #+#    #+#             */
/*   Updated: 2020/01/21 15:46:33 by aquill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		itoa_length(int n)
{
	int length;

	length = 0;
	if (n < 0)
		length++;
	if (n == 0)
		length = 1;
	while (n)
	{
		length++;
		n = n / 10;
	}
	return (length);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		length;

	length = itoa_length(n);
	str = ft_strnew(length);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[length-- - 1] = '8';
			n = n / 10;
		}
		n = -n;
	}
	while (n != 0 && length >= 0)
	{
		str[length-- - 1] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
