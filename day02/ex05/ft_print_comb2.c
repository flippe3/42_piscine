/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 13:39:48 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/21 19:06:20 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			ft_putchar((char)((i / 10) + '0'));
			ft_putchar((char)((i % 10) + '0'));
			ft_putchar(' ');
			ft_putchar((char)((j / 10) + '0'));
			ft_putchar((char)((j % 10) + '0'));
			if (i != 98 || j != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
