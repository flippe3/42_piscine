/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:54:01 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/05 17:07:30 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *c)
{
	while(*c != 0)
		write(1, c++, 1);
}

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		int i = -1;
		ft_putstr(argv[argc - 1]);
		write(1, "\n", 1);		
	}
	return 0;
}
