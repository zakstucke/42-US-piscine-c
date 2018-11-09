/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 17:17:06 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/31 17:38:15 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		calc_length(int argc, char **argv)
{
	int		x;
	int		y;
	int		length;

	x = 1;
	length = 0;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			length++;
			y++;
		}
		x++;
	}
	return (length);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		x;
	int		y;
	int		z;

	str = (char*)malloc(sizeof(char) * (calc_length(argc, argv) + 1));
	x = 1;
	z = 0;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
			str[z++] = argv[x][y++];
		if (x < argc - 1)
			str[z++] = '\n';
		x++;
	}
	str[z] = '\0';
	return (str);
}
