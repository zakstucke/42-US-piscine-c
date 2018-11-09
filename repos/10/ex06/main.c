/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:01:17 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/06 20:48:37 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	num;

	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		write(1, "8", 1);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		if (nb >= 10)
			ft_putnbr(nb / 10);
		num = nb % 10 + '0';
		write(1, &num, 1);
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

void	divide(char **argv)
{
	if (ft_atoi(argv[3]) == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
}

void	modulus(char **argv)
{
	if (ft_atoi(argv[3]) == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(ft_atoi(argv[1]) % ft_atoi(argv[3]));
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
		else if (argv[2][0] == '-')
			ft_putnbr(ft_atoi(argv[1]) - ft_atoi(argv[3]));
		else if (argv[2][0] == '/')
			divide(argv);
		else if (argv[2][0] == '%')
			modulus(argv);
		else if (argv[2][0] == '*')
			ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
		else
			ft_putnbr(0);
		write(1, "\n", 1);
	}
	return (0);
}
