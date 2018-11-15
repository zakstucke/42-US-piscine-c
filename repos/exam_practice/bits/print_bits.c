/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:34:19 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/09 17:00:26 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"

int		reversed_bits(unsigned char octet)
{
	int				i;
	int				reversed;

	reversed = 0;
	i = 0;
	while (i < 7)
	{
		reversed += octet & 1;
		reversed = reversed << 1;
		octet = octet >> 1;
		i++;
	}
	return (reversed);
}
