/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 20:14:13 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/05 20:25:26 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	else
	{
		int length = 0;
		while(argv[1][length])
			length++;
		while(argv[1][--length])
			write(1, &argv[1][length], 1);
		write(1, "\n", 1);
	}
}
