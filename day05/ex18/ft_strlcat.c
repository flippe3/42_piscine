/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 19:39:34 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/26 20:38:22 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (dest[length] && size > length)
		length++;
	i = length;
	while (src[length - i] && size > (length + 1))
	{
		dest[length] = src[length - i];
		length++;
	}
	if (size > i)
		dest[length] = '\0';
	return (i + ft_strlen(src));
}
