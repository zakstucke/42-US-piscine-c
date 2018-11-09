/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 09:44:50 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/07 00:53:58 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int s, int x, int *a)
{
	int		y;

	y = 1;
	while (y <= (a[1] / 2) + 1 - (s / 2) - 2)
	{
		ft_putchar(' ');
		y++;
	}
	ft_putchar('/');
	y = 1;
	while (y <= s)
	{
		if (x >= a[0] - a[2] && y > s / 2 + 1 - a[3] && y < (s / 2) + 1 + a[3])
		{
			if (x > 17 && x == a[0] - (a[2] / 2) && y == (s / 2) + a[3] - 1)
				ft_putchar('$');
			else
				ft_putchar('|');
		}
		else
			ft_putchar('*');
		y++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	setup_sastantua(int *a)
{
	int		s;
	int		x;
	int		blk_ht;
	int		next_step;

	s = 1;
	x = 1;
	blk_ht = 3;
	next_step = 3;
	while (x <= a[0])
	{
		print_line(s, x, a);
		if (next_step == x)
		{
			if (blk_ht % 2 == 0)
				s += 2 * (blk_ht / 2);
			else
				s += 2 * ((blk_ht / 2) + 1);
			blk_ht++;
			next_step += blk_ht;
		}
		s += 2;
		x++;
	}
}

/*
** a = aay = [height,width,door_height,half_door(-1 for centre)
** x = ticker*
** y = ticker_2
** s = stars
*/

void	sastantua(int size)
{
	int		a[4];
	int		blk_ht;
	int		x;

	if (size <= 0)
		return ;
	a[0] = 3;
	blk_ht = 3;
	a[1] = 7;
	x = 2;
	while (x <= size)
	{
		a[0] += x + 2;
		if (blk_ht % 2 == 0)
			a[1] += ((blk_ht + 1) * 2) + (2 * (blk_ht / 2));
		else
			a[1] += ((blk_ht + 1) * 2) + (2 * ((blk_ht / 2) + 1));
		blk_ht++ && x++;
	}
	a[2] = blk_ht - 3 - ((blk_ht + 1) % 2);
	a[3] = ((blk_ht) / 2) - ((blk_ht + 1) % 2);
	setup_sastantua(a);
}
