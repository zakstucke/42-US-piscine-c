/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:33:43 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/29 21:08:28 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				value;
	unsigned int	x;

	x = 0;
	value = 0;
	while (x < n && s1[x] != '\0' && s2[x] != '\0')
	{
		value += s1[x];
		value -= s2[x];
		x++;
	}
	if (value == 0 && x < n)
	{
		if (s1[x] != '\0')
			value += s1[x];
		else if (s2[x] != '\0')
			value -= s2[x];
	}
	return (value);
}
