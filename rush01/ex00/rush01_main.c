/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 21:07:40 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/01 23:27:31 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		ft_find_empty_block(char **sudoku, int *row, int *col)
{
	while (*row < 9)
	{
		while (*col < 9)
		{
			if (sudoku[*row][*col] == '.')
				return (0);
			*col += 1;
		}
		*col = 0;
		*row += 1;
	}
	return (1);
}

int		ft_check_available(char **sudoku, int row, int col, int num)
{
	int		rowstart;
	int		colstart;
	int		i;

	i = 0;
	rowstart = (row / 3) * 3;
	colstart = (col / 3) * 3;
	while (i < 9)
	{
		if (sudoku[row][i] == (num + '0'))
			return (0);
		else if (sudoku[i][col] == (num + '0'))
			return (0);
		else if (sudoku[rowstart + (i % 3)][colstart + (i / 3)] == (num + '0'))
			return (0);
		i++;
	}
	return (1);
}

int		sol_c(char **origin, char **copy, int row, int col)
{
	int		number;
	int		sol_total;
	int		sol_count;
	char	**next_copy;

	number = 0;
	sol_total = 0;
	sol_count = 0;
	next_copy = ft_copy_malloc(copy);
	while (++number < 10)
	{
		if (ft_check_available(next_copy, row, col, number))
		{
			next_copy[row][col] = number + '0';
			sol_count = ft_sudoku_solver(origin, next_copy, row, col);
			if (sol_count)
			{
				sol_total += sol_count;
				if (sol_total > 1)
					break ;
			}
			next_copy[row][col] = '.';
		}
	}
	return (sol_total);
}

int		ft_sudoku_solver(char **origin, char **copy, int row, int col)
{
	if (ft_find_empty_block(copy, &row, &col))
	{
		ft_copy(origin, copy);
		return (1);
	}
	return (sol_c(origin, copy, row, col));
}

int		main(int argc, char **argv)
{
	char	**copy;
	char	**origin;

	origin = 0;
	if (argc == 10)
	{
		if (ft_check_input(argv) || ft_check_len(argv))
		{
			ft_print_error();
			return (0);
		}
		origin = ft_copy_malloc_main(argv);
		copy = origin;
		if (ft_sudoku_solver(origin, copy, 0, 0) >= 2)
			ft_print_error();
		else
			ft_print_sudoku(origin);
	}
	else
		ft_print_error();
	free(origin);
	return (0);
}
