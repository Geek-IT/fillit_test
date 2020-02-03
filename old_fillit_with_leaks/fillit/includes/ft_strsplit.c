/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquill <aquill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:16:42 by aquill            #+#    #+#             */
/*   Updated: 2020/01/21 18:19:24 by aquill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		list_length(char const *s, char c)
{
	int length;

	length = 0;
	if (*s != c && *s != 0)
	{
		length++;
		s++;
	}
	while (*s != 0)
	{
		if (*s != c && s[-1] == c)
			length++;
		s++;
	}
	return (length + 1);
}

char			**ft_strsplit(char const *s, char c)
{
	unsigned int	x;
	unsigned int	y;
	char			**list;

	if (s == NULL)
		return (NULL);
	list = (char**)malloc(sizeof(char*) * list_length(s, c));
	if (!list)
		return (NULL);
	y = 0;
	while (*s != 0)
	{
		x = 0;
		while (s[x] != c && s[x] != 0)
			x++;
		if (x)
		{
			list[y++] = ft_strncpy(ft_strnew(x), s, x);
			s = &s[x];
		}
		else
			s++;
	}
	list[y] = NULL;
	return (list);
}
