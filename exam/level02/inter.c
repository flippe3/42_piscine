/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:03:21 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/06 14:33:37 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char temp[100000];
	int size = 0;
	if(argc == 3)
	{
		int i = -1;
		while(argv[1][++i])
		{
			int j = i - 1;
			while(argv[2][++j])
			{
				if(argv[1][i] == argv[2][j])
				{
					temp[size++] = argv[1][i];
					break;
				}
			}
		}
		temp[size] = '\0';
	}

	int i = 0;
	int j = 0;
	int print = 1;
	while(temp[i])
	{
		print = 1;
		j = i;
		while(++j < size)
		{
			if(temp[i] == temp[j])
				print = 0;
		}
		if(print == 1)
			write(1, &temp[i], 1);
		i++;
	}
 	write(1, "\n", 1);
	return 0;
}
