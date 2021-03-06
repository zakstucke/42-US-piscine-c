/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 21:20:53 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/30 00:20:09 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		x;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	x = 1;
	while (str[x] != '\0')
	{
		if ((str[x - 1] < 'a' && str[x - 1] > 'Z') ||
				str[x - 1] < 'A' || str[x - 1] > 'z')
		{
			if (str[x] >= 'a' && str[x] <= 'z')
				str[x] -= 32;
		}
		if ((str[x] >= 'A' && str[x] <= 'Z'))
		{
			if ((str[x - 1] >= 'A' && str[x - 1] <= 'Z') ||
					(str[x - 1] >= 'a' && str[x - 1] <= 'z')
					|| (str[x - 1] >= '0' && str[x - 1] <= '9'))
				str[x] += 32;
		}
		x++;
	}
	return (str);
}
