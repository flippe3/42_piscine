/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 11:47:17 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/23 13:47:53 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb >= 13 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
		result *= nb--;
	return (result);
}
