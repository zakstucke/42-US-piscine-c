/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 11:44:08 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/29 23:22:05 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
