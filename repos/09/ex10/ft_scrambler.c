/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:04:50 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/02 16:27:00 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int		intermediary;

	intermediary = *******c;
	*******c = ***a;
	***a = *b;
	*b = ****d;
	****d = intermediary;
}
