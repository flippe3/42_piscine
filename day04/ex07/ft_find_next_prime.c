/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 12:10:37 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/23 12:43:06 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int iterator;

	if (nb <= 1)
		return (0);
	iterator = 1;
	while (++iterator < (nb / 2) + 1)
	{
		if (nb % iterator == 0)
			return (0);
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
