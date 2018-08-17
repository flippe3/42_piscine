/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 00:33:59 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/26 00:35:51 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		num(int c)
{
	return (c >= '0' && c <= '9');
}

int		ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!num(*str))
			return (0);
		str++;
	}
	return (1);
}
