/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:49:49 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/28 13:36:18 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (0);
	i = 0;
	size = max - min;
	while (min < max)
		range[0][i++] = min++;
	return (size);
}
