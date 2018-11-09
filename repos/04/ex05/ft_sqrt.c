/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 12:23:57 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/26 15:09:44 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		square_root;

	square_root = 1;
	while (1)
	{
		if (square_root * square_root == nb)
			return (square_root);
		if (square_root * square_root > nb)
			return (0);
		square_root++;
	}
}
