/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fuckthis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadolfss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 18:49:51 by hadolfss          #+#    #+#             */
/*   Updated: 2018/06/21 23:36:33 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	combo(int arr[], int values[], int data[], int i)
{
	int x;

	if (values[2] == values[1])
	{
		x = -1;
		while (++x < values[1])
			ft_putchar(data[x] + '0');
		if (data[0] != 10 - values[1])
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	if (i >= values[0])
		return ;
	data[values[2]] = arr[i];
	values[2] += 1;
	combo(arr, values, data, i + 1);
	values[2] -= 1;
	combo(arr, values, data, i + 1);
}

void	ft_print_combn(int n)
{
	int arr[10];
	int x;
	int data[n];
	int values[3];

	values[0] = sizeof(arr) / sizeof(int);
	values[1] = n;
	values[2] = 0;
	x = -1;
	while (++x < 10)
	{
		arr[x] = x;
	}
	combo(arr, values, data, 0);
}
