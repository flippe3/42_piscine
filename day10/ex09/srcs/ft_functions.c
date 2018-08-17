/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:44:50 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/03 23:39:25 by fnilsson         ###   ########.fr       */
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
	int	i;
	int	j;

	i = 0;
	while (g_opptab[i].operation)
	{
		j = 0;
		while (operator[j] && g_opptab[i].operation[j] &&
			   g_opptab[i].operation[j] == operator[j])
		{
			++j;
			if (!operator[j])
				return (i);
		}
		++i;
	}
	return (-1);}

int		calculate(int a, int b, int operation)
{
	return ((*g_opptab[operation].function)(a, b));
}
