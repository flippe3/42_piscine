/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:22:18 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/11 23:23:42 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		validate(int **arr, int rows)
{
	int i;
	int j;
	int col_size;

	col_size = -1;
	while (arr[0][++col_size] != '\0')
		;
	i = -1;
	while (++i < rows)
	{
		j = -1;
		while (++j < col_size)
			if (j == col_size - 1 && arr[i][j] == '\0')
				return (1);
	}
	return (0);
}

char	*get_char(char *first_row, int file)
{
	char	input;
	char	*temp;
	int		start;

	start = 0;
	temp = (char*)malloc(sizeof(char) * 20);
	while (read(file, &input, 1))
	{
		if (input != '\n')
			temp[start++] = input;
		else
			break ;
	}
	first_row[0] = temp[start - 3];
	first_row[1] = temp[start - 2];
	first_row[2] = temp[start - 1];
	return (first_row);
}

int		**fill_grid(int **grid, int file, char *first_row, int row)
{
	char	input;
	int		col;

	col = 0;
	while (read(file, &input, 1))
	{
		if (input != '\n')
		{
			if (input == first_row[1])
				grid[row][col++] = -1;
			else if (input == first_row[0])
				grid[row][col++] = 1;
			else
			{
				write(1, "map error\n", 10);
				return (0);
			}
		}
		if (input == '\n')
		{
			grid[row++][col] = '\0';
			col = 0;
		}
	}
	return (grid);
}

int		start_solve(int file, int i)
{
	int		**grid;
	char	*first_row;

	first_row = (char*)malloc(sizeof(char) * 3);
	grid = (int**)malloc(20000 * sizeof(int*));
	while (++i < 20000)
		grid[i] = (int*)malloc(20000 * sizeof(int));
	first_row = get_char(first_row, file);
	grid = fill_grid(grid, file, first_row, 0);
	i = 0;
	while (grid[i][0])
		i++;
	if (validate(grid, i))
	{
		write(1, "map error\n", 10);
		return (0);
	}
	add_rows(grid, i, first_row);
	free(first_row);
	i = -1;
	while (++i < 20000)
		free(grid[i]);
	free(grid);
	return (0);
}

int		main(int argc, char **argv)
{
	int		file;
	int		n_files;

	if (argc > 1)
	{
		n_files = 0;
		while (++n_files < argc)
		{
			if (n_files > 1)
				write(1, "\n", 1);
			if ((file = open(argv[n_files], O_RDONLY)) >= 0)
				start_solve(file, -1);
			close(file);
		}
	}
	else
		start_solve(0, -1);
	return (0);
}
