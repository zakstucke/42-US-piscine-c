/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 23:07:02 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/07 23:10:07 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tmp;

	if (*begin_list1 == 0)
		*begin_list1 = begin_list2;
	else
	{
		tmp = *begin_list1;
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = begin_list2;
	}
}

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

void	ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}
