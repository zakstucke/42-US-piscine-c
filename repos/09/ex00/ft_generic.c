/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 18:29:26 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/01 18:37:45 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str, int length)
{
	write(1, str, length);
}

void	ft_generic(void)
{
	ft_putstr("Tut tut ; Tut tut\n", 18);
}
