/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 18:59:51 by choho             #+#    #+#             */
/*   Updated: 2018/10/28 23:01:52 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_row(int x)
{
	int ticker;

	ft_putchar('o');
	ticker = 0;
	while (ticker < x - 2)
	{
		ft_putchar('-');
		ticker++;
	}
	if (x > 1)
		ft_putchar('o');
	ticker++;
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int ticker;
	int ticker_2;

	if (x > 0 && y > 0)
	{
		ft_row(x);
		ticker = 0;
		while (ticker < y - 2)
		{
			ft_putchar('|');
			ticker_2 = 0;
			while (ticker_2 < x - 2)
			{
				ft_putchar(' ');
				ticker_2++;
			}
			if (x > 1)
				ft_putchar('|');
			ft_putchar('\n');
			ticker++;
		}
		if (y > 1)
			ft_row(x);
	}
}
