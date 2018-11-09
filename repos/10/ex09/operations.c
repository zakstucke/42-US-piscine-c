/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 21:49:54 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/05 22:50:29 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	ft_sub(char **argv)
{
	ft_putnbr(ft_atoi(argv[1]) - ft_atoi(argv[3]));
}

void	ft_add(char **argv)
{
	ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
}

void	ft_mul(char **argv)
{
	ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
}

void	ft_div(char **argv)
{
	if (ft_atoi(argv[3]) == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
}

void	ft_mod(char **argv)
{
	if (ft_atoi(argv[3]) == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(ft_atoi(argv[1]) % ft_atoi(argv[3]));
}
