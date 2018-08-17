/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 20:26:02 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/05 21:01:08 by fnilsson         ###   ########.fr       */
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
		return 0;
	}
	else
	{
		int i = 0;
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if(argv[1][i] >= 'Z' - 13)
					ft_putchar('A' + (12 - ('Z' - argv[1][i])));
				else
					ft_putchar(argv[1][i] + 13);	
			}
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if(argv[1][i] >= 'z' - 13)
					ft_putchar('a' + (12 - ('z' - argv[1][i])));				
				else
					ft_putchar(argv[1][i] + 13);					
			}
			else
				write(1, &argv[1][i], 1);	
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
