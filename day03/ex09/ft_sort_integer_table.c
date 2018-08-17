/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:34:11 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/22 15:43:20 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int		imax;
	int		i;

	if (tab)
		while (--size >= 0)
		{
			i = -1;
			imax = -1;
			while (++i <= size)
				if (imax == -1 || tab[i] > tab[imax])
					imax = i;
			if (imax != size)
				ft_swap(tab + size, tab + imax);
		}
}
