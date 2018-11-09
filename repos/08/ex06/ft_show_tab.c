/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 09:19:41 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/02 11:40:36 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

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
	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar('8');
	}
	else
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
}

void	ft_show_tab(t_stock_par *par)
{
	int		index;
	int		index_2;

	index = 0;
	while ((par[index]).str != 0)
	{
		ft_putstr((par[index]).copy);
		ft_putchar('\n');
		ft_putnbr((par[index]).size_param);
		ft_putchar('\n');
		index_2 = 0;
		while ((par[index]).tab[index_2] != 0)
		{
			ft_putstr((par[index]).tab[index_2]);
			ft_putchar('\n');
			index_2++;
		}
		index++;
	}
}
