/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 23:16:39 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/06 23:51:12 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *last_item;
	t_list *next_item;

	last_item = 0;
	while ((*begin_list) != 0)
	{
		next_item = (*begin_list)->next;
		(*begin_list)->next = last_item;
		last_item = (*begin_list);
		(*begin_list) = next_item;
	}
	(*begin_list) = last_item;
}
