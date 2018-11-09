/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:20:54 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/26 22:53:39 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		string_length;
	int		ticker;
	char	transport_variable;

	string_length = 0;
	while (*(str + string_length) != '\0')
	{
		string_length++;
	}
	string_length--;
	ticker = 0;
	while (ticker < string_length)
	{
		transport_variable = *(str + ticker);
		*(str + ticker) = *(str + (string_length));
		*(str + (string_length)) = transport_variable;
		ticker++;
		string_length--;
	}
	return (str);
}
