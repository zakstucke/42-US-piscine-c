/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:13:19 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/07 17:47:02 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*list;
	t_list	*tmp;
	int		counter;
	int		index;
	int		index_2;

	counter = 0;
	list = begin_list;
	while (list != 0 && ++counter)
		list = list->next;
	index = 0;
	while (index < counter - 1)
	{
		index_2 = index;
		list = begin_list;
		while (index_2 < counter - 1)
		{
			tmp = list->data;
			list->data = list->next->data;
			list->next->data = tmp;
			list = list->next;
			index_2++;
		}
		index++;
	}
}
