/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 21:12:51 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/11 20:09:18 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		int i = -1;
		while(argv[1][++i])
		{
			if(argv[1][i] == argv[2][0])
				ft_putchar(argv[3][0]);
			else
				ft_putchar(argv[1][i]);
		}
	}
	write(1, "\n", 1);
	return 0;
}
