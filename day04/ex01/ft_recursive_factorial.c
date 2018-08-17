/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 11:53:48 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/23 14:10:02 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb >= 13)
		return (0);
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}
