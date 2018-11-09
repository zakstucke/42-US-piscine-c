/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 15:51:47 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/02 16:29:20 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int		x;
	int		y;
	int		success;

	x = 0;
	if (length <= 0)
		return (0);
	while (x < length)
	{
		y = 0;
		success = 0;
		while (y < length)
		{
			if (y != x && tab[y] == tab[x])
				success = 1;
			y++;
		}
		if (success == 0)
			return (tab[x]);
		x++;
	}
	return (0);
}
