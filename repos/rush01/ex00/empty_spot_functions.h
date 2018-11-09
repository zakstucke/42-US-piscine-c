/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_spot_functions.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:52:28 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/04 17:08:17 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPTY_SPOT_FUNCTIONS_H
# define EMPTY_SPOT_FUNCTIONS_H
# include "solver_helpers.h"

t_position		*get_empty_spots(int **board);
void			analyse_empty_spots(int **board, t_position *empty_spots);
int				find_empty_spot(t_position *empty_spots);

#endif
