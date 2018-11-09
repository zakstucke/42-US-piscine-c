/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 13:14:20 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/01 13:25:43 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		ticker;

	ticker = 0;
	while (str[ticker] != '\0')
	{
		ft_putchar(str[ticker]);
		ticker++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int		x;

	x = 0;
	while (tab[x] != 0)
	{
		ft_putstr(tab[x]);
		ft_putchar('\n');
		x++;
	}
}
