/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:00:08 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/08 22:26:28 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		eval_expr(char *expr);
int		parse_sum(char **expr);
int		parse_factors(char **expr);
int		parse_number(char **expr);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_atoi(char **s);

#endif
