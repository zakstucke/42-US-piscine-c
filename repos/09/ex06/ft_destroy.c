/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 11:55:45 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/02 12:08:43 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#ifndef __FT_ULTIMATOR_H__

# define __FT_ULTIMATOR_H__

#endif

void	ft_destroy(char ***factory)
{
	int		x;
	int		y;

	x = 0;
	while (factory[x] != 0)
	{
		y = 0;
		while (factory[x][y] != 0)
		{
			free(factory[x][y]);
			y++;
		}
		free(factory[x]);
		x++;
	}
	free(factory);
}
