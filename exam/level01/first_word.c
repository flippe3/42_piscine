/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 18:25:44 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/12 01:22:45 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putstr(char *str)
{
	while(*str)
	{
		if(*str == ' ' || *str == '\t' || *str == '\n')
			return ;
		else
			write(1, str++, 1);
	}
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
		while(argv[1][++i] != '\0')
		{
			if(argv[1][i] == ' ' || argv[1][i] == '\n' || argv[1][i] == '\t')
			{
				putstr(argv[1]);			
				write(1, "\n", 1);
				return (0);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
