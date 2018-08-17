/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 00:40:20 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/26 00:41:11 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		upper_case(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!upper_case(*str))
			return (0);
		str++;
	}
	return (1);
}
