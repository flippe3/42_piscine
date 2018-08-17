/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 23:19:34 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/03 23:22:44 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

int		ft_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}

int		ft_sub(int a, int b)
{
	return (a - b);
}

int		ft_mul(int a, int b)
{
	return (a * b);
}
