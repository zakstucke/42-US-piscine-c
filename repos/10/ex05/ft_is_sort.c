/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 19:15:59 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/05 21:01:42 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		x;

	x = 0;
	while (x < length - 1)
	{
		if (f(tab[x], tab[x + 1]) > 0)
			return (0);
		x++;
	}
	return (1);
}
