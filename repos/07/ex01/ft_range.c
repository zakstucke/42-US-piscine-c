/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:29:54 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/31 13:01:15 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*arr;
	int		x;

	arr = (int*)malloc(sizeof(int) * (max - min));
	x = 0;
	while (x + min < max)
	{
		arr[x] = x + min;
		x++;
	}
	return (arr);
}
