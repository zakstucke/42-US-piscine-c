/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:33:51 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/30 00:00:12 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		y;
	int		x;

	if (to_find[0] == '\0')
		return (str);
	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] == to_find[0])
		{
			x = 0;
			while (str[y + x] == to_find[x])
			{
				x++;
				if (to_find[x] == '\0')
					return (str + y);
			}
		}
		y++;
	}
	return (0);
}
