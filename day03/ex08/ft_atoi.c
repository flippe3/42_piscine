/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 13:31:05 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/22 15:11:07 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int num;
	int counter;
	int sign;

	num = 0;
	counter = -1;
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		counter++;
	}
	while (str[++counter] != '\0')
		num = num * 10 + str[counter] - '0';
	return (num * sign);
}
