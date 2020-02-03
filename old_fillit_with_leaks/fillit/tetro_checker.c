/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetro_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquill <aquill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:16:42 by aquill            #+#    #+#             */
/*   Updated: 2020/02/02 17:02:42 by aquill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		validate_tetro(char **str, int i, int j)
{
	int		k;

	k = 0;
	if (j < 3)
	{
		if (str[i][j + 1] == str[i][j])
			k++;
	}
	if (i < 3)
	{
		if (str[i + 1][j] == str[i][j])
			k++;
	}
	if (j > 0)
	{
		if (str[i][j - 1] == str[i][j])
			k++;
	}
	if (i > 0)
	{
		if (str[i - 1][j] == str[i][j])
			k++;
	}
	return (k);
}

int		tetro_checker(char ***str, int i, int j)
{
	int		b;
	int		k;

	b = 0;
	k = 0;
	while (str[b] != 0)
	{
		while (str[b][i] != 0)
		{
			while (str[b][i][j] != 0)
			{
				if (str[b][i][j] >= 65 && str[b][i][j] <= 90)
					k += validate_tetro(str[b], i, j);
				j++;
			}
			j = 0;
			i++;
		}
		if (k < 6)
			return (0);
		k = 0;
		i = 0;
		b++;
	}
	return (1);
}

void	frees_matrix(char ***matrix)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (matrix[i])
	{
		while (matrix[i][j])
		{
			free(matrix[i][j]);
			j++;
		}
		i++;
		free(matrix[i]);
	}
	free(matrix);
}
