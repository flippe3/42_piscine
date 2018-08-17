/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 23:59:55 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/26 00:16:11 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*result;

	result = str;
	while (*result != '\0')
	{
		if (*result >= 'a' && *result <= 'z')
			*result -= ('a' - 'A');
		result++;
	}
	return (str);
}
