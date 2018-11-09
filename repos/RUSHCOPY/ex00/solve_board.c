/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <zstucke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 23:33:58 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/04 15:44:00 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve_board.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		ticker;

	ticker = 0;
	while (str[ticker] != '\0')
	{
		ft_putchar(str[ticker]);
		ticker++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int		check_box(t_position empty_spot, int check_num, int **board)
{
	int		x;
	int		y;
	int		ticker_x;
	int		ticker_y;
	int		value;

	x = empty_spot.x - (empty_spot.x % 3);
	y = empty_spot.y - (empty_spot.y % 3);
	ticker_y = 0;
	while (ticker_y < 3)
	{
		ticker_x = 0;
		while (ticker_x < 3)
		{
			value = board[y + ticker_y][x + ticker_x];
			if (value > 9)
				value -= 10;
			if (value == check_num)
				return (0);
			ticker_x++;
		}
		ticker_y++;
	}
	return (1);
}

int		check_row(int row, int check_num, int **board)
{
	int x;
	int y;
	int value;

	x = 0;
	y = row - 1;

	while (x<9)
	{
		value = board [y][x];
		if (value > 9)
			value -= 10;
		if (value == check_num)
			return (0);
		x++;
	}
	return (1);
}

int		check_column(int column, int check_num, int **board)
{
	int		x;
	int		y;
	int		value;

	x = column - 1;
	y = 0;

	while (y < 9)
	{
		value = board[y][x];
		if (value > 9)
			value -= 10;
		if (value == check_num)
			return (0);
		y++;
	}
	return (1);
}

#include "/nfs/2018/z/zstucke/headers.h"
t_position *get_empty_spots(int **board)
{
	// This finds all of the empty spots and works out the amount of numbers available in each spot,
	// This creates a struct containing the x value, y_value and number of options for each spot.
	t_position *arr_of_spots;
	t_position empty_spot;
	int			x;
	int			y;
	int			index;

	arr_of_spots = (t_position*)malloc(sizeof(t_position) * 65); // 81 - 17 (min solutions) + 1 for 0 to signify end of spot array.

	// Now just fill it with all of the empty spots, ending with a struct, with is_valid to equal false.
	index = 0;
	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (board[y][x] == 0)
			{
		//	t_position empty_spot;
			empty_spot.x = x;
			empty_spot.y = y;
			empty_spot.is_valid = 1;
			arr_of_spots[index] = empty_spot;
			index++;
			}
			x++;
		}
		y++;
	}
	// Now add a dead struct to signify end of spaces
	empty_spot.is_valid = 0;
	arr_of_spots[index] = empty_spot;
	return (arr_of_spots);
}

void	analyse_empty_spots(int **board, t_position *empty_spots)
{
	int		index;
	int		number;

	index = 0;
	while (empty_spots[index].is_valid != 0)
	{
		empty_spots[index].potential_numbers = 0;
		number = 1;
		while (number < 10)
		{
			if (check_num_allowed(empty_spots[index], number, board))
				empty_spots[index].potential_numbers++;
			number++;
		}
		index++;
	}
}
int		find_empty_spot(t_position *arr)
{
	int		index;
	int		smallest_index;
	int		smallest_potential_numbers;

	smallest_index = -1;
	smallest_potential_numbers = 10;
	index = 0;
	while (arr[index].is_valid != 0)
	{
//		ft_putnbr(arr[index].is_valid);
//		ft_putstr(" ");
//		ft_putnbr(arr[index].potential_numbers);
		if (arr[index].is_valid != 2 && arr[index].potential_numbers < smallest_potential_numbers)
		{
			smallest_potential_numbers = arr[index].potential_numbers;
			smallest_index = index;
		}
		index++;
	}
	if (smallest_index == -1)
	{
		return (index); // just returns failed struct to signify it is full
	}

	// Signify the struct has been used:
	arr[smallest_index].is_valid = 2;
	return (smallest_index);
}

int		check_num_allowed(t_position empty_spot, int number, int **board)
{
	// Run all three checks and only return true if all of them are true
	if (check_column(empty_spot.x + 1, 	number, board))
	{
		if (check_row(empty_spot.y + 1, number, board))
		{
			if (check_box(empty_spot, number, board))
				return (1);
		}
	}
	// If one of the checks fails it reaches this point and returns False.
	return (0);
}

int		solve_board(int **board, t_position *empty_spots)
{
	int			number;
	int			index;

	// Find an unassigned location:
	index = find_empty_spot(empty_spots);
//	ft_putnbr(index);
//	ft_putstr(" ");

	// If there are none then exit with true to exit out of the recursion tree;
	if (empty_spots[index].is_valid == 0)
		return (1);

	// Try and fill it with every digit and then recall for the rest of the board recursively
	number = 1;
	while (number < 10)
	{
		// First check if the position is safe for the number:
		if (check_num_allowed(empty_spots[index], number, board))
		{
			// assign the number hoping it will work...
			board[empty_spots[index].y][empty_spots[index].x] = number;

			// recall the function to go recursively along the board until it completes or fails:
			// if this is true then the board is solved and we can return true also:
			if (solve_board(board, empty_spots) == 1)
				return (1);
			else
			{
				// remove the number and try again by looping to the top of the while loop and incrementing number:
				board[empty_spots[index].y][empty_spots[index].x] = 0;
			}

		}
		// Gets here if the number was not allowed or failed later on to lead to the correct board,
		// we will now increment the number and try again with a higher number:
		number++;
	}
	// Exits the while loop if it cannot find a solution at this level,
	// we return false here to trigger the function one recursion back to change number etc,
	// we also reset the spot to empty:
	empty_spots[index].is_valid = 1;
	return (0);
}

void	display_board(int **board)
{
	int		y;
	int		x;
	int		value;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			value = board[y][x];
			if (value > 9)
				value -= 10;
			ft_putnbr(value);
			if (x != 8)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			x++;
		}
		y++;
	}
}
