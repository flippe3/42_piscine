/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 21:33:16 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/04 21:46:18 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*head;
	t_list	*node;

	if (ac < 1)
		return (NULL);
	head = ft_create_elem(av[--ac]);
	if (head == NULL)
		return (NULL);
	node = head;
	while (ac > 0 && (node->next = ft_create_elem(av[--ac])) != NULL)
		node = node->next;
	return (head);
}
