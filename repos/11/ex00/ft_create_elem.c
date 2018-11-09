/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:51:18 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/07 00:27:03 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*arr;

	arr = (t_list*)malloc(sizeof(t_list));
	(*arr).next = NULL;
	(*arr).data = data;
	return (arr);
}
