/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:51:01 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/26 16:59:39 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		ticker;

	ticker = 0;
	while (*(str + ticker) != '\0')
	{
		ft_putchar(*(str + ticker));
		ticker++;
	}
}
