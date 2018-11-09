/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 21:44:56 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/29 21:48:35 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 'a' && str[x] > 'Z') || str[x] < 'A' || str[x] > 'z')
			return (0);
		x++;
	}
	return (1);
}
