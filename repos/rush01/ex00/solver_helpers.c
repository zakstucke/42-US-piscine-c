/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokarev <atokarev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 14:41:46 by atokarev          #+#    #+#             */
/*   Updated: 2018/11/04 22:01:24 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver_helpers.h"

int			check_num_allowed(t_position empty_spot, int number, int **board)
{
	if (check_column(empty_spot.x, number, board))
		if (check_row(empty_spot.y, number, board))
			return (check_box(empty_spot.x, empty_spot.y, number, board));
	return (0);
}

int			check_box(int x, int y, int number, int **board)
{
	int		ticker_x;
	int		ticker_y;
	int		value;

	x -= (x % 3);
	y -= (y % 3);
	ticker_y = 0;
	while (ticker_y < 3)
	{
		ticker_x = 0;
		while (ticker_x < 3)
		{
			value = board[y + ticker_y][x + ticker_x];
			if (value == number || value - 10 == number)
				return (0);
			ticker_x++;
		}
		ticker_y++;
	}
	return (1);
}

int			check_row(int row, int number, int **board)
{
	int column;

	column = 0;
	while (column < 9)
	{
		if (board[row][column] == number || board[row][column] - 10 == number)
			return (0);
		column++;
	}
	return (1);
}

int			check_column(int column, int number, int **board)
{
	int		row;

	row = 0;
	while (row < 9)
	{
		if (board[row][column] == number || board[row][column] - 10 == number)
			return (0);
		row++;
	}
	return (1);
}
