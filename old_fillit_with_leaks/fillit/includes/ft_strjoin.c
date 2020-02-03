/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquill <aquill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:16:42 by aquill            #+#    #+#             */
/*   Updated: 2020/01/21 18:09:37 by aquill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *destination;
	char *output;

	if (s1 && s2)
	{
		destination = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (destination)
		{
			output = destination;
			while (*s1 != 0)
				*destination++ = *s1++;
			while (*s2 != 0)
				*destination++ = *s2++;
			return (output);
		}
		else
		{
			return (NULL);
		}
	}
	else
		return (NULL);
}
