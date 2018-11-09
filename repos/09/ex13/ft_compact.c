/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:31:29 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/02 16:28:07 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int		index;
	int		next_pos;

	index = 0;
	next_pos = 0;
	while (tab[index] == 0)
		index++;
	while (index < length)
	{
		if (tab[index] != 0 && next_pos < index)
		{
			tab[next_pos] = tab[index];
			next_pos++;
		}
		index++;
	}
	if (next_pos == 0 && tab[0] == 0)
		return (0);
	else
		return (next_pos + 1);
}
