/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 22:56:42 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/13 01:00:46 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str) 
{
	int sign = 1;
	int nbr = 0;

	while(*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	if(*str == '-' || *str == '+')
	{
		if(*str == '-')
			sign = -1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return (nbr);
}

int main()
{
	int a = ft_atoi("36-48");
	printf("%d", a);
}
