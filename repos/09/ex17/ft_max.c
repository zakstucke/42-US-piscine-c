/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 15:45:17 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/02 16:28:39 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int		largest;
	int		x;

	if (length <= 0)
		return (0);
	largest = tab[0];
	x = 1;
	while (x < length)
	{
		if (tab[x] > largest)
			largest = tab[x];
		x++;
	}
	return (largest);
}
