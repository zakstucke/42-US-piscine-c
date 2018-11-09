/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 21:40:09 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/05 21:44:31 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		index;
	int		smallest;
	int		x;
	char	*intermediary;

	index = 1;
	smallest = 0;
	while (tab[index] != 0)
	{
		if (cmp(tab[index - 1], tab[index]) > 0)
		{
			x = index - 1;
			while (cmp(tab[x], tab[x + 1]) > 0 && x >= 0)
			{
				intermediary = tab[x + 1];
				tab[x + 1] = tab[x];
				tab[x] = intermediary;
				x--;
			}
		}
		index++;
	}
}
