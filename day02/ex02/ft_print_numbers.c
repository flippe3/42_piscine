/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 22:21:25 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/20 23:32:56 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char letter);

void	ft_print_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number++);
	}
}
