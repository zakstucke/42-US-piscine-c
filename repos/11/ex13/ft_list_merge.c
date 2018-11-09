/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:52:48 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/07 11:26:56 by zstucke          ###   ########.fr       */
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
