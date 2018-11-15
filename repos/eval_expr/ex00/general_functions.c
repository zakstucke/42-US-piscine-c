/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 22:46:03 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/11 19:14:10 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general_functions.h"

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

int		ft_putnbr_into_str(int nb, char **str, int starting_index)
{
	if (nb == -2147483648)
	{
		starting_index = ft_putnbr_into_str(-214748364, str, starting_index);
		starting_index = ft_putnbr_into_str(8, str, starting_index);
		return (starting_index);
	}
	else
	{
		if (nb < 0)
		{
			(*str)[starting_index] = '-';
			starting_index++;
			nb = nb * -1;
		}
		if (nb >= 10)
			starting_index = ft_putnbr_into_str(nb / 10, str, starting_index);
		(*str)[starting_index] = nb % 10 + '0';
		return (starting_index + 1);
	}
}

int		ft_atoi(char *str)
{
	int		x;
	int		number;
	int		sign;

	x = 0;
	number = 0;
	sign = 1;
	while (str[x] == ' ' || str[x] == '\t' || str[x] == '\n' ||
			str[x] == '\v' || str[x] == '\f' || str[x] == '\r')
		x++;
	if (str[x] == '+')
		x++;
	else if (str[x] == '-')
	{
		sign = -1;
		x++;
	}
	while (str[x] != '\0' && str[x] >= '0' && str[x] <= '9')
	{
		number = (number * 10) + str[x] - 48;
		x++;
	}
	return (number * sign);
}
