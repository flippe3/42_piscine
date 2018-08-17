/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:44:50 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/03 23:35:04 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int		num;
	int		counter;
	int		sign;

	num = 0;
	counter = -1;
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		counter++;
	}
	while (str[++counter] != '\0')
		num = num * 10 + str[counter] - '0';
	return (num * sign);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb < 10)
	{
		ft_putchar((char)(nb + '0'));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((char)(nb % 10 + '0'));
	}
}

int		operators(char *op)
{
	if (op[1] != '\0')
		return (-1);
	if (op[0] == '+')
		return (0);
	if (op[0] == '-')
		return (1);
	if (op[0] == '*')
		return (2);
	if (op[0] == '/')
		return (3);
	if (op[0] == '%')
		return (4);
	return (-1);
}

int		calculate(int a, int b, int operation)
{
	int	(*operations[5])(int, int);

	operations[0] = &ft_add;
	operations[1] = &ft_sub;
	operations[2] = &ft_mul;
	operations[3] = &ft_div;
	operations[4] = &ft_mod;
	return ((*operations[operation])(a, b));
}
