/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:52:05 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/11 23:33:41 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		add_rows(int **grid, int rows, char *first_row)
{
	int r;
	int col_size;
	int **new_grid;

	col_size = -1;
	while (grid[0][++col_size] != '\0')
		;
	new_grid = (int**)malloc(rows * sizeof(int*));
	r = -1;
	while (++r < rows)
		new_grid[r] = (int*)malloc(20000 * sizeof(int));
	r = -1;
	while (++r < col_size)
		new_grid[0][r] = grid[0][r];
	fix(grid, new_grid, rows, col_size);
	find_max(new_grid, rows, first_row, col_size);
	r = -1;
	while (++r < rows)
		free(new_grid[r]);
	free(new_grid);
	return (0);
}

void	fix(int **grid, int **new_grid, int rows, int col_size)
{
	int		r;
	int		c;

	r = 0;
	while (++r < rows)
	{
		c = -1;
		while (++c < col_size)
		{
			if (r == 1 && grid[r][c] != -1 && grid[r - 1][c] != -1)
				new_grid[r][c] = 2;
			else if (r != 1 && grid[r - 1][c] != -1 && grid[r][c] != -1)
				new_grid[r][c] = new_grid[r - 1][c] + grid[r][c];
			else if (r != 1 && grid[r - 1][c] == -1 && grid[r][c] != -1)
				new_grid[r][c] = 1;
			else
				new_grid[r][c] = -1;
		}
		new_grid[r][c] = '\0';
	}
}

int		find_max(int **grid, int row, char *first_row, int col_size)
{
	int s[4];
	int ab[2];
	int j;
	int i;

	i = -1;
	s[0] = -1;
	while (++i < row && (j = -1))
		while (++j < col_size)
			if (grid[i][j] > s[0] && (ab[0] = -1))
			{
				ab[1] = 0;
				while (++ab[0] < grid[i][j])
					if (grid[i][j] > grid[i][j + ab[0]]
					|| grid[i][j + ab[0]] == '\0')
						ab[1] = 1;
				if (ab[1] == 0)
				{
					s[0] = grid[i][j];
					s[1] = i;
					s[2] = j;
				}
			}
	prep_print(grid, s, row, first_row);
	return (0);
}
