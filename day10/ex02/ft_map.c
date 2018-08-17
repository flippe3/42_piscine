/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 14:16:10 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/03 14:20:43 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*t;
	int		i;

	i = -1;
	t = (int*)malloc(sizeof(*tab) * length);
	if (tab && t != NULL)
	{
		while (++i < length)
			t[i] = f(tab[i]);
	}
	return (t);
}
