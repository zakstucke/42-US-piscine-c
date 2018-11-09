/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 08:11:13 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/25 22:38:03 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char	first_digits;
	char	second_digits;

	first_digits = 0;
	while (first_digits <= 99)
	{
		second_digits = first_digits + 1;
		while (second_digits <= 99)
		{
			ft_putchar(first_digits / 10 + '0');
			ft_putchar(first_digits % 10 + '0');
			ft_putchar(' ');
			ft_putchar(second_digits / 10 + '0');
			ft_putchar(second_digits % 10 + '0');
			if (first_digits != 98 || second_digits != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second_digits++;
		}
		first_digits++;
	}
}
