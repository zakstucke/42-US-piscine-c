/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 16:51:50 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/02 16:53:03 by zstucke          ###   ########.fr       */
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
