/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:26:53 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/09 12:25:15 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != 0)
	{
		applyf(root->item);
		if (root->left != 0)
			btree_apply_prefix(root->left, applyf);
		if (root->right != 0)
			btree_apply_prefix(root->right, applyf);
	}
}
