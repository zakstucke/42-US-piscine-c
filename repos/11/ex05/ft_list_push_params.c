/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:51:21 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/07 23:01:37 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*last;
	t_list	*new;
	int		x;

	new = ft_create_elem(av[0]);
	last = new;
	x = 1;
	while (x < ac)
	{
		new = ft_create_elem(av[x]);
		new->next = last;
		last = new;
		x++;
	}
	return (last);
}
