/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 09:05:24 by choho             #+#    #+#             */
/*   Updated: 2018/10/28 23:02:08 by zstucke          ###   ########.fr       */
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
		first = '/';
		second = '\\';
	}
	else
	{
		first = '\\';
		second = '/';
	}
	ft_putchar(first);
	ticker = 0;
	while (ticker < x - 2)
	{
		ft_putchar('*');
		ticker++;
	}
	if (x > 1)
		ft_putchar(second);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int ticker;
	int ticker_2;

	if (x > 0 && y > 0)
	{
		print_level(x, 1);
		ticker = 0;
		while (ticker < y - 2)
		{
			ft_putchar('*');
			ticker_2 = 0;
			while (ticker_2 < x - 2)
			{
				ft_putchar(' ');
				ticker_2++;
			}
			if (x > 1)
				ft_putchar('*');
			ft_putchar('\n');
			ticker++;
		}
		if (y > 1)
			print_level(x, 0);
	}
}
