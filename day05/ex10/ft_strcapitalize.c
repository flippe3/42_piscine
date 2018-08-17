/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <filip.c.nilsson@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 00:20:00 by fnilsson          #+#    #+#             */
/*   Updated: 2018/06/26 00:25:01 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int		upper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int		alpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr)
	{
		if ((ptr == str || alpha(*(ptr - 1)) == 0))
		{
			if (lower(*ptr))
				*ptr -= ('a' - 'A');
		}
		else if (upper(*ptr))
			*ptr += ('a' - 'A');
		++ptr;
	}
	return (str);
}
