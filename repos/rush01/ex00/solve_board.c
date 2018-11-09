/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <zstucke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 23:33:58 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/04 21:29:27 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver_helpers.h"
#include "empty_spot_functions.h"
#include "solve_board.h"

int			solve_board(int **board, t_position *empty_spots)
{
	int			number;
	int			index;

	analyse_empty_spots(board, empty_spots);
	index = find_empty_spot(empty_spots);
	if (empty_spots[index].is_valid == 0)
		return (1);
	number = 1;
	while (number < 10)
	{
		if (check_num_allowed(empty_spots[index], number, board))
		{
			board[empty_spots[index].y][empty_spots[index].x] = number;
			if (solve_board(board, empty_spots) == 1)
				return (1);
			else
				board[empty_spots[index].y][empty_spots[index].x] = 0;
		}
		number++;
	}
	empty_spots[index].is_valid = 1;
	return (0);
}
