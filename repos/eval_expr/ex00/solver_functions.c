/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:02:55 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/11 20:52:37 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general_functions.h"
#include "operations.h"
#include "solver_functions.h"

int		next_num(char *str)
{
	while (*str != '\0')
	{
		if ((*str <= '9' && *str >= '0') || (*str == '-'))
			return (ft_atoi(str));
		str++;
	}
	return (0);
}

int		last_num(char *str, int limit)
{
	int		x;

	x = 0;
	while (x <= limit)
	{
		if (*str >= '0' && *str <= '9')
		{
			while (((*str >= '0' && *str <= '9') || *str == '-') && x < limit)
			{
				x++;
				str--;
			}
			return (ft_atoi(str));
		}
		str--;
		x++;
	}
	return (0);
}

/*
** Quite a confusing function, takes in the index of the operator you are
** replacing,then replaces the operator and the number beforehand
** (including any potential negative) as well as the number afterwards.
** This is all replaced with the new resulting number: new_val.
** x is only passed in to save a line!
*/

void	replace(int current_index, char **str, int new_val, int x)
{
	int		start;
	int		end;

	x = current_index - 1;
	while (x >= 0 && ((*str)[x] > '9' || (*str)[x] < '0'))
		x--;
	while (x >= 0 && ((*str)[x] <= '9' && (*str)[x] >= '0'))
		x--;
	start = x + 1;
	if (((*str)[x] == '-') && (x == 0 || ((*str)[x - 1] > '9' ||
					(*str)[x - 1] < '0')))
		start = x;
	x = current_index + 1;
	while ((*str)[x] != '\0' && ((*str)[x] > '9' || (*str)[x] < '0'))
		x++;
	while ((*str)[x] != '\0' && (((*str)[x] <= '9' && (*str)[x] >= '0')))
		x++;
	end = x - 1;
	x = start;
	while (x <= end)
	{
		(*str)[x] = ' ';
		x++;
	}
	ft_putnbr_into_str(new_val, str, start);
}

int		evaluate_operator(char **str, int m)
{
	int		x;
	int		y;

	x = 0;
	while ((*str)[x] != '\0')
	{
		if ((*str)[x] == ')')
			break ;
		if ((((*str)[x] == '*' || (*str)[x] == '%' || (*str)[x] == '/') &&
			m == 1) || ((((*str)[x] == '+' || (*str)[x] == '-') && m == 0)))
		{
			y = 0;
			while (y < 5)
			{
				if (g_opptab[y].oper[0] == (*str)[x])
					replace(x, str, g_opptab[y].funcptr(last_num(*str + x, x),
						next_num(*str + x + 1)), 0);
				y++;
			}
		}
		x++;
	}
	return (x);
}

void	solve(char **str)
{
	int		x;

	x = 0;
	while ((*str)[x] != '\0')
	{
		if ((*str)[x] == '(')
		{
			(*str)[x] = ' ';
			*str += x + 1;
			solve(str);
			*str -= x + 1;
		}
		x++;
	}
	evaluate_operator(str, 1);
	x = evaluate_operator(str, 0);
	if ((*str)[x] == ')')
		(*str)[x] = ' ';
	return ;
}
