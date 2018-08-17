/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 18:11:54 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/24 23:00:49 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		calc(int size)
{
	int ground;
	int width;
	int ground_step;

	ground = 1;
	width = 1;
	ground_step = 4;
	while (ground <= size)
	{
		width += 2 * (2 + ground);
		ground++;
		width += ground_step;
		if (ground % 2 && ground < size)
			ground_step += 2;
	}
	width -= ground_step;
	return (width);
}

void	write_line(int space)
{
	int pos;

	pos = 0;
	while (pos < space)
	{
		ft_putchar(' ');
		pos++;
	}
}

void	write_levels(int size, int ground, int width, int step)
{
	int door;
	int pos;

	door = 1 + 2 * ((ground - 1) / 2);
	pos = 0;
	while (pos < width)
	{
		if (pos == 0)
			ft_putchar('/');
		else if (pos == width - 1)
			ft_putchar('\\');
		else
		{
			if (ground == size && pos >= (width - door) / 2
					&& pos < (width + door) / 2 && 2 + ground - step <= door)
				if (door >= 5 && step == 2 + ground - door / 2 - 1
						&& pos == (width + door) / 2 - 2)
					ft_putchar('$');
				else
					ft_putchar('|');
			else
				ft_putchar('*');
		}
		pos++;
	}
}

void	sastantua(int size)
{
	int	ground;
	int	height;
	int	step;
	int	width;

	if (size < 1)
		return ;
	ground = 1;
	width = 1;
	while (ground <= size)
	{
		height = 2 + ground;
		step = 0;
		while (step < height)
		{
			width += 2;
			write_line((calc(size) - width) / 2);
			write_levels(size, ground, width, step);
			ft_putchar('\n');
			step++;
		}
		ground++;
		width += 4 + 2 * ((ground - 2) / 2);
	}
}
