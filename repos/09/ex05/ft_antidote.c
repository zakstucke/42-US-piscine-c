/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 23:39:59 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/02 16:22:15 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int		ft_antidote(int i, int j, int k)
{
	int		arr[3];

	arr[0] = i;
	arr[1] = j;
	arr[2] = k;
	if (arr[1] < arr[0])
		ft_swap(&arr[1], &arr[0]);
	if (arr[2] < arr[1])
	{
		if (arr[2] < arr[0])
			return (arr[0]);
		else
			return (arr[2]);
	}
	return (arr[1]);
}
