/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokarev <atokarev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 14:40:25 by atokarev          #+#    #+#             */
/*   Updated: 2018/11/04 14:51:07 by atokarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "display_functions.h"

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
