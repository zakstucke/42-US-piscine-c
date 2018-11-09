/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:47:47 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/07 22:36:48 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*outer;
	t_list	*inner;
	t_list	*tmp;

	outer = *begin_list;
	while (outer != 0)
	{
		inner = *begin_list;
		while (inner->next != 0)
		{
			if (cmp(inner->data, inner->next->data) > 0)
			{
				tmp = inner->data;
				inner->data = inner->next->data;
				inner->next->data = tmp;
			}
			inner = inner->next;
		}
		outer = outer->next;
	}
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new;

	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
	ft_list_sort(begin_list, cmp);
}
