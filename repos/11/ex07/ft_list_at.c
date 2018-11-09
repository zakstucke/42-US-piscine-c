/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 23:06:16 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/07 23:02:37 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	count;

	if (begin_list == 0)
		return (0);
	count = 0;
	while (begin_list->next != 0 && count < nbr)
	{
		begin_list = begin_list->next;
		count++;
	}
	if (count < nbr)
		return (0);
	return (begin_list);
}
