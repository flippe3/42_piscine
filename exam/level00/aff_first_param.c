/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:54:01 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/05 19:18:44 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
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
		ft_putstr(argv[1]);
		write(1, "\n", 1);		
	}
	return 0;
}
