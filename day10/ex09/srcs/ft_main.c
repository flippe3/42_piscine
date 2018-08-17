/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:01:25 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/03 23:35:00 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int		main(int argc, char **argv)
{
	int	res;
	int	operator;

	if (argc != 4)
		return (0);
	operator = operators(argv[2]);
	if (operator == -1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else if (operator == 3 && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (operator == 4 && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	res = calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), operator);
	ft_putnbr(res);
	ft_putchar('\n');
	return (0);
}
