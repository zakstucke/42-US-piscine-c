/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 22:43:57 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/05 23:01:54 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H
# include "general_functions.h"

typedef struct	s_opp
{
	char	*oper;
	void	(*funcptr)(char **argv);
}				t_opp;

void			ft_sub(char **argv);
void			ft_add(char **argv);
void			ft_mul(char **argv);
void			ft_div(char **argv);
void			ft_mod(char **argv);
void			ft_usage(char **argv);

#endif
