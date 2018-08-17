/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 21:09:12 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/01 21:59:18 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <stdlib.h>
# include <unistd.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_print_error(void);
void		ft_print_sudoku(char **sudoku);
void		ft_copy(char **dest, char **copy);
char		**ft_copy_malloc(char **copy);
void		ft_copy_main(char **dest, char **copy);
int			ft_sol_count(char **origin, char **copy, int row, int col);
int			ft_sudoku_solver(char **origin, char **copy, int row, int col);
char		**ft_copy_malloc_main(char **main_arg);
int			ft_check_input(char **argv);
int			ft_check_len(char **argv);

#endif
