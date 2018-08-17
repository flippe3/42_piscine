/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 12:04:00 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/23 13:43:48 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int answer;

	answer = 1;
	while (answer * answer <= nb)
	{
		if (answer * answer == nb)
			return (answer);
		answer++;
	}
	return (0);
}
