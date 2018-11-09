/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:54:34 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/05 21:38:15 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x])
		x++;
	return (s1[x] - s2[x]);
}

void	ft_sort_wordtab(char **tab)
{
	int		index;
	int		smallest;
	int		x;
	char	*intermediary;

	index = 1;
	smallest = 0;
	while (tab[index] != 0)
	{
		if (ft_strcmp(tab[index - 1], tab[index]) > 0)
		{
			x = index - 1;
			while (ft_strcmp(tab[x], tab[x + 1]) > 0 && x >= 0)
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
