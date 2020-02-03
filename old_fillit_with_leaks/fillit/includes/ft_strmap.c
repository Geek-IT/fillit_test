/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquill <aquill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:16:42 by aquill            #+#    #+#             */
/*   Updated: 2020/01/21 18:14:38 by aquill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *outm;
	char *outo;

	if (f && s)
	{
		outo = ft_strnew(ft_strlen(s));
		if (!outo)
			return (NULL);
		outm = outo;
		while (*s != 0)
		{
			*outm++ = f(*s++);
		}
		return (outo);
	}
	return (NULL);
}
