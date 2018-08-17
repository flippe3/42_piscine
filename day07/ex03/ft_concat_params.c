/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 13:37:12 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/28 15:19:03 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*temp;
	int		size;

	i = 1;
	size = 0;
	while (i < argc)
		size += ft_strlen(argv[i++] + 1);
	temp = (char*)malloc(sizeof(char) * size);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			temp[k++] = argv[i][j++];
		if (argc - 1 == i)
			temp[k++] = '\0';
		else
			temp[k++] = '\n';
		i++;
	}
	return (temp);
}
