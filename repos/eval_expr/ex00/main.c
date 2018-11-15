/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:06:07 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/11 20:53:05 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general_functions.h"
#include "solver_functions.h"

int		check_valid(char *i)
{
	if (*i == '\0')
		return (0);
	while (*i != '\0')
	{
		if (*i != ' ' && *i != '\t' && *i != '*' && *i != '/' && *i != '%' &&
			*i != '+' && *i != '-' && *i != '(' && *i != ')')
			if (*i < '0' || *i > '9')
				return (0);
		i++;
	}
	return (1);
}

int		eval_expr(char *str)
{
	solve(&str);
	return (ft_atoi(str));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		if (check_valid(av[1]))
		{
			ft_putnbr(eval_expr(av[1]));
			ft_putchar('\n');
		}
	}
}
