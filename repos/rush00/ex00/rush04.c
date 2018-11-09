/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 20:20:24 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/31 11:39:05 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_level(int x, int order)
{
	char	first;
	char	second;
	int		ticker;

	if (order == 1)
	{
		first = 'A';
		second = 'C';
	}
	else
	{
		first = 'C';
		second = 'A';
	}
	ft_putchar(first);
	ticker = 0;
	while (ticker < x - 2)
	{
		ft_putchar('B');
		ticker++;
	}
	if (x > 1)
		ft_putchar(second);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		ticker;
	int		ticker_2;

	if (x > 0 && y > 0)
	{
		print_level(x, 1);
		ticker = 0;
		while (ticker < y - 2)
		{
			ft_putchar('B');
			ticker_2 = 0;
			while (ticker_2 < x - 2)
			{
				ft_putchar(' ');
				ticker_2++;
			}
			if (x > 1)
				ft_putchar('B');
			ft_putchar('\n');
			ticker++;
		}
		if (y > 1)
			print_level(x, 0);
	}
}
