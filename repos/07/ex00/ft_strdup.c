/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:22:21 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/30 21:29:28 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		x;

	x = 0;
	while (src[x] != '\0')
		x++;
	new = (char*)malloc(sizeof(*new) * x);
	x = 0;
	while (src[x] != '\0')
	{
		new[x] = src[x];
		x++;
	}
	return (new);
}
