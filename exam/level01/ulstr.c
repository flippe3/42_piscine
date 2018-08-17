/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 21:24:56 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/05 22:06:05 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = -1;
		while(argv[1][++i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ft_putchar(argv[1][i] - ('A' - 'a'));
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				ft_putchar(argv[1][i] + ('A' - 'a'));
			else
				ft_putchar(argv[1][i]);
		}
	}
	write(1, "\n", 1);
	return (0);
}
