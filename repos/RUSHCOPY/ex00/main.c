/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <zstucke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 16:23:31 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/04 13:26:49 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "/nfs/2018/z/zstucke/headers.h"
int		main(int argc, char** argv)
{
	int		**board;
	t_position *empty_spots;

	board = 0;
	board = create_board(--argc, ++argv, board);
	if (board == 0)
	{
		write(1, "Error\n", 6);
		return(-1);
	}
	else
	{

		empty_spots = get_empty_spots(board);
		analyse_empty_spots(board, empty_spots);
		if (solve_board(board, empty_spots) == 0)
			write(1, "Error\n", 6);
		else
			display_board(board);
	}
	return (0);
}
