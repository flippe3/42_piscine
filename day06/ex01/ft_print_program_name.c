/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 13:10:58 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/26 14:08:34 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	if (argc > 0)
	{
		while (*argv[0] != '\0')
			ft_putchar(*argv[0]++);
		ft_putchar('\n');
	}
	return (0);
}
