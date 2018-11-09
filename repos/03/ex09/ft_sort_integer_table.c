/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 22:11:44 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/26 23:02:48 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		ticker;
	int		ticker_2;
	int		intermediary;

	ticker = 0;
	while (ticker < size)
	{
		ticker_2 = 0;
		while (ticker_2 < size)
		{
			if (tab[ticker_2] > tab[ticker])
			{
				intermediary = tab[ticker_2];
				tab[ticker_2] = tab[ticker];
				tab[ticker] = intermediary;
			}
			ticker_2++;
		}
		ticker++;
	}
}
