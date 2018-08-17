/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 18:57:05 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/11 03:44:53 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		int i = -1;
		while(argv[1][++i])
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				int iterator = -2;
				while(++iterator < argv[1][i] - 'a')
					ft_putchar(argv[1][i]);
			}
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				int iterator = -2;
				while(++iterator < argv[1][i] - 'A')
					ft_putchar(argv[1][i]);
			}
			else
				ft_putchar(argv[1][i]);
		}
		write(1, "\n", 1);
	}
}
