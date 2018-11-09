/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 09:55:10 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/26 16:10:45 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		factorial;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	factorial = 1;
	while (nb > 0)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
