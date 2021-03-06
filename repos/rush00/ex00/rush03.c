/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 09:05:24 by choho             #+#    #+#             */
/*   Updated: 2018/10/28 23:11:26 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_level(int x)
{
	int		ticker;

	ft_putchar('A');
	ticker = 0;
	while (ticker < x - 2)
	{
		ft_putchar('B');
		ticker++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	ticker;
	int	ticker_2;

	if (x > 0 && y > 0)
	{
		print_level(x);
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
			print_level(x);
	}
}
