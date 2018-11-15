/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_functions.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:03:52 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/11 19:34:16 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_FUNCTIONS_H
# define SOLVER_FUNCTIONS_H

int		next_num(char *str);
int		last_num(char *str, int limit);
void	replace(int current_index, char **str, int new_val, int x);
int		evaluate_operator(char **str, int m);
void	solve(char **str);

#endif
