/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_board.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <zstucke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 23:26:23 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/04 13:31:20 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_BOARD_H
# define SOLVE_BOARD_H

#include <unistd.h>
#include <stdlib.h>

typedef struct 	s_position
{
	int x;
	int y;
	int is_valid; // 1 for unused, 2 for places, 0 for in_valid i.e. end of board;
	int potential_numbers;
}				t_position;


void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int nb);
int			check_box(t_position empty_spot, int check_num, int **board);
int			check_row(int row, int check_num, int **board);
int			check_column(int column, int check_num, int **board);
t_position	*get_empty_spots(int **board);
void		analyse_empty_spots(int **board, t_position *empty_spots);
int			find_empty_spot(t_position *empty_spots);
int			check_num_allowed(t_position empty_spot, int number, int **board);
int			solve_board(int **board, t_position *empty_spots);
void		display_board(int **board);

#endif
