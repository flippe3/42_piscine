/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 19:26:15 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/26 19:35:01 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *temp;

	temp = dest;
	while (*temp != '\0')
		++temp;
	while (nb && (*temp++ = *src++) != '\0')
	{
		nb--;
	}
	if (nb <= 0)
		*temp = '\0';
	return (dest);
}
