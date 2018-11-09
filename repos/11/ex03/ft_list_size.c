/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:45:56 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/07 22:58:13 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin)
{
	int		count;

	count = 0;
	if (begin == 0)
		return (0);
	while (begin->next != 0)
	{
		count++;
		begin++;
	}
	return (count + 1);
}
