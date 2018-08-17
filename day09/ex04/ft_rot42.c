/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 22:14:44 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/28 23:28:44 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;
	int		increase;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			increase = 42;
			while (increase + str[i] > 'Z')
				increase -= 26;
			str[i] += increase;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			increase = 42;
			while (increase + str[i] > 'z')
				increase -= 26;
			str[i] += increase;
		}
		i++;
	}
	return (str);
}
