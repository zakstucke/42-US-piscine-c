/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:37:11 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/07 17:12:25 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
** need the outer loop to run through the list enough
** times to sort it. The inner loop is the one which
** actually does the sorting by switching individual
** data points over and over until it eventually gets sorted.
** may take the entire outer loop and that is why it is needed.
*/

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
