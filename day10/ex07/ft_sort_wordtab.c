/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:52:45 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/03 21:18:51 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (tab[i])
		i++;
	while (i-- > 0)
	{
		temp = 0;
		j = -1;
		while (++j < i)
		{
			if (ft_strcmp(tab[j + 1], tab[j]) < 0)
			{
				temp = 1;
				ft_swap(tab + j + temp, tab + j);
			}
		}
		if (temp == 0)
			break ;
	}
}
