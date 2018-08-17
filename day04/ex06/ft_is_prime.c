/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 12:06:12 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/23 12:09:45 by fnilsson         ###   ########.fr       */
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
