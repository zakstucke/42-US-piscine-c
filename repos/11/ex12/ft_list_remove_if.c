/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:28:38 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/07 23:04:02 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*last;
	t_list	*current;

	if (*begin_list == 0)
		return ;
	if (cmp((*begin_list)->data, data_ref) == 0)
		*begin_list = (*begin_list)->next;
	if (*begin_list == 0)
		return ;
	last = *begin_list;
	current = last->next;
	while (current != 0)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			last->next = current->next;
			free(current);
		}
		else
			last = current;
		current = last->next;
	}
}
