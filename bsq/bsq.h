/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:25:18 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/11 22:11:22 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		validate_input(char **argv);
int		add_rows(int **grid, int rows, char *first_row);
int		find_max(int **grid, int rows, char *first_row, int col_size);
void	ft_putchar(char c);
void	fix(int **grid, int **new_grid, int rows, int col_size);
void	prep_print(int **grid, int s[4], int rows, char *first_row);
void	print_sol(int **grid, int s[8], int rows, char *first_row);
#endif
