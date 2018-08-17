/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 21:53:16 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/11 22:52:40 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	prep_print(int **grid, int s[4], int rows, char *first_row)
{
	int new_arr[8];

	new_arr[0] = s[0];
	new_arr[1] = s[1];
	new_arr[2] = s[2];
	new_arr[3] = s[3];
	new_arr[4] = -1;
	while (grid[0][++new_arr[4]] != '\0')
		;
	new_arr[5] = -1;
	while (first_row[++new_arr[5]] != '\0')
		;
	new_arr[6] = -1;
	new_arr[7] = 0;
	print_sol(grid, new_arr, rows, first_row);
}

void	print_sol(int **grid, int s[8], int rows, char *first_row)
{
	while (++s[6] < rows && (s[7] = -1))
		while (++s[7] < s[4])
		{
			if (s[7] != s[4] - 1)
			{
				if (grid[s[6]][s[7]] == -1)
					ft_putchar(first_row[1]);
				else if (s[6] > s[1] - s[0] && s[6] <= s[1]
					&& s[7] >= s[2] && s[7] < s[2] + s[0])
					ft_putchar(first_row[2]);
				else
					ft_putchar(first_row[0]);
			}
			else
			{
				if (grid[s[6]][s[7]] == -1)
					ft_putchar(first_row[1]);
				else if (s[6] > s[1] - s[0] && s[6] <= s[1]
					&& s[7] >= s[2] && s[7] < s[2] + s[0])
					ft_putchar(first_row[2]);
				else
					ft_putchar(first_row[0]);
				write(1, "\n", 1);
			}
		}
}
