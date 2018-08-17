/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnilsson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:57:38 by fnilsson          #+#    #+#             */
/*   Updated: 2018/07/08 22:30:04 by fnilsson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		parse_number(char **expr)
{
	int nbr;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		nbr = parse_sum(expr);
		if (**expr == ')')
			(*expr)++;
		return (nbr);
	}
	return (ft_atoi(expr));
}

int		parse_sum(char **expr)
{
	int		num;
	int		num2;
	char	op;

	num = parse_factors(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '+' && op != '-')
			return (num);
		(*expr)++;
		num2 = parse_factors(expr);
		if (op == '+')
			num += num2;
		else
			num -= num2;
	}
	return (num);
}

int		parse_factors(char **expr)
{
	int		num;
	int		num2;
	char	op;

	num = parse_number(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '/' && op != '*' && op != '%')
			return (num);
		(*expr)++;
		num2 = parse_number(expr);
		if (op == '/')
			num /= num2;
		else if (op == '*')
			num *= num2;
		else
			num %= num2;
	}
	return (num);
}

int		eval_expr(char *expr)
{
	return (parse_sum(&expr));
}
