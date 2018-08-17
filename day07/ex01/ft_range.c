/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:25:23 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/28 12:49:00 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*temp;
	int		*arr;
	int		i;

	if (min >= max)
		return (NULL);
	arr = (int*)malloc(sizeof(*temp) * (max - min));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
