/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 15:20:19 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/28 16:59:20 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\r' || c == '\n'
			|| c == '\v' || c == '\f');
}

int		word_count(char *str)
{
	int i;
	int chr;

	if (*str == '\0')
		return (0);
	i = 0;
	chr = 0;
	while (*str)
	{
		if (is_whitespace(*str))
		{
			str++;
			chr = 0;
		}
		else
		{
			if (chr == 0)
				i++;
			chr = 1;
			str++;
		}
	}
	return (i);
}

char	**allocate_mem(char *str, int w_count, int i, int j)
{
	char	**arr;

	arr = (char**)malloc(sizeof(char*) * (w_count + 1));
	if (*str == '\0' && ((arr[0] = 0) || 1))
		return (arr);
	while (is_whitespace(*str))
		str++;
	while (*str)
	{
		if (is_whitespace(*str))
		{
			arr[i++] = (char*)malloc(sizeof(char) * (j + 1));
			while ((j = 0) || is_whitespace(*str))
				str++;
			str--;
		}
		else
			j++;
		if (*(str++ + 1) == '\0')
			arr[i] = (char*)malloc(sizeof(char) * (j + 1));
	}
	if (!(is_whitespace(*(str - 1))))
		i++;
	arr[i] = 0;
	return (arr);
}

char	**ft_split_whitespaces(char *str)
{
	char	**temp;
	int		i;
	int		j;
	int		w_count;

	w_count = word_count(str);
	temp = allocate_mem(str, w_count, 0, 0);
	while (is_whitespace(*str))
		str++;
	i = 0;
	j = 0;
	while (i < w_count)
	{
		if (is_whitespace(*str))
		{
			while (is_whitespace(*str))
				str++;
			temp[i][j] = '\0';
			i += (j != 0) ? 1 : 0;
			j = 0;
		}
		else
			temp[i][j++] = *str++;
	}
	return (temp);
}
