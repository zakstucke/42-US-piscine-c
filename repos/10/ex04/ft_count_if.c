/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 19:13:10 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/05 19:15:19 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		x;
	int		total;

	x = 0;
	total = 0;
	while (tab[x] != 0)
	{
		if (f(tab[x]) == 1)
			total++;
		x++;
	}
	return (total);
}
