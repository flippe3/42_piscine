/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 22:38:51 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/05 22:55:43 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		if(argv[2][0] == '+')
			printf("%d", atoi(&argv[1][0]) + atoi(&argv[3][0]));
		else if(argv[2][0] == '/')
			printf("%d", atoi(&argv[1][0]) / atoi(&argv[3][0]));
		else if(argv[2][0] == '-')
			printf("%d", atoi(&argv[1][0]) - atoi(&argv[3][0]));
		else if(argv[2][0] == '*')
			printf("%d", atoi(&argv[1][0]) * atoi(&argv[3][0]));
		else if(argv[2][0] == '%')
			printf("%d", atoi(&argv[1][0]) % atoi(&argv[3][0]));
	}
	printf("\n");
	return 0;
}
