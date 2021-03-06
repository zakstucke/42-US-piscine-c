/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 21:56:33 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/29 22:00:40 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 'a' || str[x] > 'z')
			return (0);
		x++;
	}
	return (1);
}
