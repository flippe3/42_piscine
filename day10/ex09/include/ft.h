/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:15:52 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/03 23:41:43 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <unistd.h>
#include "../ft_opp.h"

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		calculate(int a, int b, int operation);
int		ft_atoi(char *str);
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_usage(int a, int b);
int		operators(char *op);

typedef struct	s_opp
{
	char	*operation;
	int		(*function)(int, int);
}

#endif
