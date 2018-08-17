/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 11:45:02 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/28 12:12:54 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

char	*ft_strdup(char *str)
{
	char	*copy;

	copy = (char*)malloc(sizeof(*copy) * (ft_strlen(str) + 1));
	if (copy == NULL)
		return (NULL);
	copy = ft_strcpy(copy, str);
	return (copy);
}
