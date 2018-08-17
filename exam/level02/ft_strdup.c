/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:08:31 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/06 13:27:14 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *elo;
	int size = -1;
	int i = -1;
	while(src[++size])
		size++;
	elo = (char*)malloc(sizeof(char) * size  + 1);
	if(elo == NULL)
		return (NULL);
	while(src[++i])
		elo[i] = src[i];
	elo[i] = '\0';
	return (elo);
}
