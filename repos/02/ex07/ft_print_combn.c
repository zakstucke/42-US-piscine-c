/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 11:19:08 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/25 22:36:42 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_combn(int n)
{
	char	nums[n];
	int		ticker;

	ticker = 0;
	while (ticker < n)
	{
		nums[ticker] = '0';
		ticker++;
	}
	ticker = 0;
	while (ticker < n)
	{
		ft_putchar(nums[ticker]);
		ticker++;
	}
}
