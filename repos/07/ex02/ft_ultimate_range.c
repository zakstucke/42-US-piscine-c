/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 16:25:03 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/31 17:15:31 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		x;
	int		*arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = (int*)malloc(sizeof(int) * (max - min));
	x = 0;
	while (x + min < max)
	{
		arr[x] = x + min;
		x++;
	}
	*range = arr;
	return (x);
}
