/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_spot_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:51:00 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/05 22:17:08 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver_helpers.h"
#include "empty_spot_functions.h"

int			find_empty_spot(t_position *arr)
{
	int		index;
	int		smallest_index;
	int		choices;

	smallest_index = -1;
	choices = 10;
	index = 0;
	while (arr[index].is_valid != 0)
	{
		if (arr[index].is_valid != 2 && arr[index].potential_numbers < choices)
		{
			choices = arr[index].potential_numbers;
			smallest_index = index;
		}
		index++;
	}
	if (smallest_index == -1)
		return (index);
	arr[smallest_index].is_valid = 2;
	return (smallest_index);
}

void		analyse_empty_spots(int **board, t_position *empty_spots)
{
	int		index;
	int		number;

	index = 0;
	while (empty_spots[index].is_valid != 0)
	{
		if (empty_spots[index].is_valid != 2)
		{
			empty_spots[index].potential_numbers = 0;
			number = 1;
			while (number < 10)
			{
				if (check_num_allowed(empty_spots[index], number, board))
					empty_spots[index].potential_numbers++;
				number++;
			}
		}
		index++;
	}
}

t_position	*get_empty_spots(int **board)
{
	t_position	*arr_of_spots;
	t_position	empty_spot;
	int			index;

	arr_of_spots = (t_position*)malloc(sizeof(t_position) * 65);
	index = 0;
	empty_spot.y = 0;
	while (empty_spot.y < 9)
	{
		empty_spot.x = 0;
		while (empty_spot.x < 9)
		{
			if (board[empty_spot.y][empty_spot.x] == 0)
			{
				empty_spot.is_valid = 1;
				arr_of_spots[index] = empty_spot;
				index++;
			}
			empty_spot.x++;
		}
		empty_spot.y++;
	}
	empty_spot.is_valid = 0;
	arr_of_spots[index] = empty_spot;
	return (arr_of_spots);
}
