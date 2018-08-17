/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 21:00:25 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/25 21:37:45 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;
	int	to_find_size;

	i = 0;
	z = 0;
	to_find_size = 0;
	while (to_find[to_find_size])
		to_find_size++;
	if (to_find_size == 0)
		return (str);
	while (str[i])
	{
		while (to_find[z] == str[i + z])
		{
			if (z == to_find_size - 1)
				return (str + i);
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}
