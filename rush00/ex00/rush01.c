/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 11:49:30 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/24 14:04:54 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top(int x)
{
	ft_putchar('/');
	while (x > 2)
	{
		ft_putchar('*');
		x--;
	}
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	middle(int x)
{
	ft_putchar('*');
	while (x > 2)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
		ft_putchar('*');
	ft_putchar('\n');
}

void	bottom(int x)
{
	ft_putchar('\\');
	while (x > 2)
	{
		ft_putchar('*');
		x--;
	}
	if (x > 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if ((x <= 0) || (y <= 0))
		return ;
	top(x);
	while (y > 2)
	{
		middle(x);
		y--;
	}
	if (y > 1)
		bottom(x);
}
