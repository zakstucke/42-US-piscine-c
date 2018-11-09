/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 14:52:43 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/26 15:51:31 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		factor;

	if (nb <= 2)
		return (2);
	while (1)
	{
		factor = 2;
		while (1)
		{
			if (nb % factor == 0)
				break ;
			if ((factor * factor) >= nb)
				return (nb);
			factor++;
		}
		nb++;
	}
}
