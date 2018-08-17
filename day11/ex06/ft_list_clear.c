/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 21:47:28 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/04 21:48:31 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	if (begin_list && *begin_list)
	{
		ft_list_clear(&(*begin_list)->next);
		free(*begin_list);
		*begin_list = NULL;
	}
}
