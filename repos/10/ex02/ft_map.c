/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 19:08:28 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/05 19:10:19 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*result;
	int		x;

	result = (int*)malloc(sizeof(int) * length);
	x = 0;
	while (x < length)
	{
		result[x] = f(tab[x]);
		x++;
	}
	return (result);
}
