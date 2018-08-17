/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 11:49:30 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/24 14:00:42 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top_and_bottom(int x)
{
	ft_putchar('o');
	while (x > 2)
	{
		ft_putchar('-');
		x--;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	middle(int x)
{
	ft_putchar('|');
	while (x > 2)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if ((x <= 0) || (y <= 0))
		return ;
	top_and_bottom(x);
	while (y > 2)
	{
		middle(x);
		y--;
	}
	if (y > 1)
		top_and_bottom(x);
}
