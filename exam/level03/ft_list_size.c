/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:49:25 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/06 14:53:54 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list node;
	int size = 0;
	while(begin_list->next)
	{
		size++;	
		begin_list = begin_list->next;
	}
	return (size);
}
