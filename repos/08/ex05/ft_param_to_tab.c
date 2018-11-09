/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 20:38:39 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/02 11:25:26 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int				ft_strlen(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

char			*ft_copy(char *str)
{
	char	*new;
	int		x;

	new = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	x = 0;
	while (str[x] != '\0')
	{
		new[x] = str[x];
		x++;
	}
	new[x] = '\0';
	return (new);
}

/*
** Create the array of structs,
** Allocate space for the number of structs (adding 1 for the empty struct),
** Fill each struct with the required info using above functions
*/

t_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*arr_of_structs;
	int				x;

	arr_of_structs = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	if (arr_of_structs == 0)
		return (0);
	(arr_of_structs[ac]).str = 0;
	x = 0;
	while (x < ac)
	{
		(arr_of_structs[x]).size_param = ft_strlen(av[x]);
		(arr_of_structs[x]).str = av[x];
		(arr_of_structs[x]).copy = ft_copy(av[x]);
		(arr_of_structs[x]).tab = ft_split_whitespaces(av[x]);
		x++;
	}
	return (arr_of_structs);
}
