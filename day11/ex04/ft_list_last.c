/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 21:12:53 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/04 21:31:38 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*i;
	int		count;

	count = 0;
	i = begin_list;
	if (i)
		while (i->next)
			i = i->next;
	return (i);
}
