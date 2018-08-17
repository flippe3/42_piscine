/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_sort_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:46:44 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/27 22:33:26 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(int argc, char *argv[])
{
	int i;
	int min;

	while (argc > 1)
	{
		min = 0;
		i = 0;
		while (argc > ++i)
			if (min == 0 || ft_strcmp(argv[i], argv[min]) < 0)
				min = i;
		while (*argv[min])
			ft_putchar(*argv[min]++);
		ft_putchar('\n');
		if (--argc != min)
			ft_swap(argv + min, argv + argc);
	}
	return (0);
}
