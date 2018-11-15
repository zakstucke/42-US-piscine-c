/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 22:43:57 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/11 19:23:57 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

typedef struct	s_opp
{
	char	*oper;
	int		(*funcptr)(int first, int second);
}				t_opp;

int				ft_mul(int first, int second);
int				ft_div(int first, int second);
int				ft_mod(int first, int second);
int				ft_sub(int first, int second);
int				ft_add(int first, int second);

t_opp g_opptab[] =
{
	{"*", &ft_mul},
	{"/", &ft_div},
	{"%", &ft_mod},
	{"-", &ft_sub},
	{"+", &ft_add}
};

#endif
