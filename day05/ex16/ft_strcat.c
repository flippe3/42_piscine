/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 19:34:47 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/26 19:34:48 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*temp != '\0')
		++temp;
	while ((*temp++ = *src++) != '\0')
		;
	return (dest);
}
