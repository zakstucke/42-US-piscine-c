/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:04:21 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/26 15:14:44 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
