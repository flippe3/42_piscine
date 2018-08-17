/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 00:39:15 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/26 00:41:03 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		low_case(int c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!low_case(*str))
			return (0);
		str++;
	}
	return (1);
}
