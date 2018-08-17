/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 20:29:47 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/04 20:36:14 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *i;
	t_list *new;

	new = ft_create_elem(data);
	if (begin_list == NULL)
		return ;
	if (new == NULL)
		return ;
	if (*begin_list == NULL)
		*begin_list = new;
	else
	{
		i = *begin_list;
		while (i->next != NULL)
			i = i->next;
		i->next = new;
	}
}
