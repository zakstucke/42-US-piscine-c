/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:34:42 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/08 22:37:12 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*new;

	new = (t_btree*)malloc(sizeof(t_btree));
	new->item = item;
	new->left = 0;
	new->right = 0;
	return (new);
}
