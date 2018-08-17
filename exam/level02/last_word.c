/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:39:42 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/12 16:21:25 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = -1;
		int index = 0;
		int length = -1;
		while(argv[1][++length])
			;
		while(argv[1][--length] == ' ' || argv[1][length] == '\t' || argv[1][length] == '\0')
			;
		while(argv[1][--length] != '\0')
			if(argv[1][length] == '\t' || argv[1][length] == ' ' || argv[1][length] == '\0')
			{
				index = length;
				break;
			}
		i = index;
		while(argv[1][++i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
