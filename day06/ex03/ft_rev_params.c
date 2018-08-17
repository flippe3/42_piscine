/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 13:11:55 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/27 22:23:40 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	while (--argc > 0)
	{
		while (*argv[argc])
			ft_putchar(*argv[argc]++);
		ft_putchar('\n');
	}
	return (0);
}
