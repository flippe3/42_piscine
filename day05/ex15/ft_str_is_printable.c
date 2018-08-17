/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 00:42:23 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/26 00:44:42 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		printable(int c)
{
	return (c > 31 && c < 127);
}

int		ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!printable(*str))
			return (0);
		str++;
	}
	return (1);
}
