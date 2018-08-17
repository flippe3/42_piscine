/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 11:58:29 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/23 14:50:14 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0 || power > 200 || nb == 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}
