/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokarev <atokarev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 20:58:58 by atokarev          #+#    #+#             */
/*   Updated: 2018/11/03 22:58:58 by atokarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "create_board.h"

#define IS_NUMBER(c) (c >= '0' && c <= '9')
#define IS_DOT(c) (c == '.')

int		**create_board(int argc, char **argv, int **board)
{
	int		counter;

	if (argc != 9 || argv == 0)
		return (0);
	board = malloc(9 * sizeof(*board));
	counter = 0;
	while (counter < argc)
	{
		board[counter] = (int*)malloc(9 * sizeof(**board));
		if (!parse_line(argv[counter], board[counter]))
			return (0);
		counter++;
	}
	return (board);
}

int		*parse_line(char *line_read, int *line_write)
{
	int counter;

	counter = 0;
	while (counter < 9 && *line_read != 0)
	{
		if (IS_NUMBER(*(line_read + counter)))
			*(line_write + counter) = *(line_read + counter) - '0' + 10;
		else if (IS_DOT(*(line_read + counter)))
			*(line_write + counter) = 0;
		else
			break ;
		counter++;
	}
	if (*(line_read + counter) != 0 || counter != 9)
		line_write = 0;
	return (line_write);
}
