/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquill <aquill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:16:42 by aquill            #+#    #+#             */
/*   Updated: 2020/02/02 18:04:40 by aquill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

int	main(int argc, char **argv)
{
	char ***matrices;
	int i;
	int j;
	
	i = 0;	
	j = 0;
	if (argc < 2)
		ft_putendl("usage: fillit source_file");
	else if (argc > 2)
		ft_putendl("to much inputting files!");
	else
	{
		matrices = set_up(argv[1]);
		if (!matrices)
			{
				frees_matrix(matrices);
				return (1);
			}
		solve(matrices);
		frees_matrix(matrices);
		return (0);
	}
	return (1);
}
