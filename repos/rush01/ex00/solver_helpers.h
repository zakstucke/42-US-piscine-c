/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_helpers.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokarev <atokarev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 14:41:46 by atokarev          #+#    #+#             */
/*   Updated: 2018/11/04 21:10:40 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_HELPERS_H
# define SOLVER_HELPERS_H
# include <stdlib.h>

typedef struct	s_position
{
	int x;
	int y;
	int is_valid;
	int potential_numbers;
}				t_position;

int				check_box(int x, int y, int check_num, int **board);
int				check_row(int row, int check_num, int **board);
int				check_column(int column, int check_num, int **board);
int				check_num_allowed(t_position spot, int number, int **board);

#endif
