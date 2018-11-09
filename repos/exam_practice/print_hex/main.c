/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 23:26:23 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/07 23:50:59 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		pwr(int nbr, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nbr);
	else
		return nbr * pwr(nbr, power - 1);
}

int		main(void)
{
	char	arr[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	int		num;
	char	*value = "ff";
	int		x;
	int		base;
	int		length;
	int		y;

	base = 16;
	num = 0;
	length = 0;
	while (value[length] != '\0')
		length++;
	x = 0;
	while (x < length)
	{
		y = 0;
		while (arr[y] != value[length - x - 1])
			y++;
		num += y * pwr(16, x);
		x++;
	}
	printf("%d", num);
	return (0);
}
