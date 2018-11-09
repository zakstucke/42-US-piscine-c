/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:00:59 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/29 21:08:49 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		arr_length(char *arr)
{
	int		length;

	length = 0;
	while (arr[length] != '\0')
		length++;
	return (length);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		value;
	int		x;

	x = 0;
	value = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		value += s1[x];
		value -= s2[x];
		x++;
	}
	if (value == 0)
	{
		if (s1[x] != '\0')
			value += s1[x];
		else if (s2[x] != '\0')
			value -= s2[x];
	}
	return (value);
}
