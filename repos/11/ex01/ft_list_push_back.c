/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:58:30 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/07 22:57:09 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*item;

	if (begin_list != 0 && *begin_list != 0)
	{
		item = *begin_list;
		while (item->next != 0)
			item = item->next;
		item->next = ft_create_elem(data);
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
