/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 21:10:17 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/01 21:10:21 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void		ft_copy(char **dest, char **copy)
{
	int		row;
	int		col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			dest[row][col] = copy[row][col];
			col++;
		}
		row++;
	}
}

char		**ft_copy_malloc(char **copy)
{
	char	**next_copy;
	int		i;

	i = 0;
	next_copy = (char **)malloc(sizeof(char *) * 9);
	while (i < 9)
	{
		next_copy[i] = (char *)malloc(sizeof(char) * 9);
		i++;
	}
	ft_copy(next_copy, copy);
	return (next_copy);
}

void		ft_copy_main(char **dest, char **copy)
{
	int		row;
	int		col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			dest[row][col] = copy[row + 1][col];
			col++;
		}
		row++;
	}
}

char		**ft_copy_malloc_main(char **main_arg)
{
	char	**copy;
	int		i;

	i = 0;
	copy = (char **)malloc(sizeof(char *) * 9);
	while (i < 9)
	{
		copy[i] = (char *)malloc(sizeof(char) * 9);
		i++;
	}
	ft_copy_main(copy, main_arg);
	return (copy);
}
