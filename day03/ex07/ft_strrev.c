/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 12:14:52 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/22 13:29:14 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

char	*ft_strrev(char *str)
{
	char	*start;
	char	*end;

	start = str;
	end = str;
	while (*end != '\0')
		end++;
	end--;
	while (start < end)
	{
		ft_swap(start, end);
		start++;
		end--;
	}
	return (str);
}
