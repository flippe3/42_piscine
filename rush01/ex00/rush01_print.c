/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 21:11:00 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/01 21:11:02 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void		ft_print_error(void)
{
	ft_putstr("Error");
	ft_putchar('\n');
}

void		ft_print_sudoku(char **sudoku)
{
	int		row;
	int		col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			ft_putchar(sudoku[row][col]);
			if (col != 8)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
