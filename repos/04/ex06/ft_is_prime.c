/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 13:13:19 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/26 15:44:29 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		factor;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	factor = 2;
	while (1)
	{
		if (nb % factor == 0)
			return (0);
		if ((factor * factor) >= nb)
			break ;
		factor++;
	}
	return (1);
}
