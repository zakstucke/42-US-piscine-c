/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:17:46 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/09 13:28:11 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int		left_depth;
	int		right_depth;

	left_depth = 0;
	right_depth = 0;
	if (root == 0)
		return (0);
	if (root->left != 0)
		left_depth = btree_level_count(root->left);
	if (root->right != 0)
		right_depth = btree_level_count(root->right);
	if (left_depth > right_depth)
		return (left_depth + 1);
	else
		return (right_depth + 1);
}
