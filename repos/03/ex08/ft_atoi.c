/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 18:36:26 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/26 23:48:51 by zstucke          ###   ########.fr       */
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
	while (str[x] < '0' || str[x] > '9')
	{
		if (str[x] != '+' && str[x] != '-' && str[x] != ' ')
			return (0);
		if ((str[x] == 43 || str[x++] == 45) && (str[x] < 48 || str[x--] > 57))
			return (0);
		if (str[x] == 43)
			sign = 1;
		if (str[x] == 45)
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

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char	str[] =  "  -9945435sfgs0";
	
	printf("%d\n",ft_atoi(str));
	printf("%d ",atoi(str));
	return (0);
}
