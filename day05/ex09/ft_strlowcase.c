/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 23:59:55 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/26 00:17:50 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*result;

	result = str;
	while (*result != '\0')
	{
		if (*result >= 'A' && *result <= 'Z')
			*result += ('a' - 'A');
		result++;
	}
	return (str);
}
