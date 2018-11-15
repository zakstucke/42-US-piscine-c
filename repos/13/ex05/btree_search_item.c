/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:04:32 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/09 13:25:02 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root == 0 || data_ref == 0)
		return (0);
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	if (root->left != 0)
		return (btree_search_item(root->left, data_ref, cmpf));
	if (root->right != 0)
		return (btree_search_item(root->right, data_ref, cmpf));
	return (0);
}
