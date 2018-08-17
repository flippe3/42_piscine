/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:25:49 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/06 14:01:56 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char *temp;
	int size = 0;
	int old_size = 0;
	int i = 0;
	while(str[size])
		size++;
	old_size = size;
	while(--size >= 0)
		temp[++i] = str[size];
	i = -1;
	while(++i < old_size)
		str[i] = temp[i];
	str[i] = '\0';
	return (str);
}
#include <stdio.h>

int main()
{
	printf("%s", ft_strrev("hannes"));
}
