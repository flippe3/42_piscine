/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 21:19:56 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/03 21:23:01 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[j + 1], tab[j]) < 0)
			{
				temp = 1;
				ft_swap(tab + j + temp, tab + j);
			}
		}
		if (temp == 0)
			break ;
	}
}
