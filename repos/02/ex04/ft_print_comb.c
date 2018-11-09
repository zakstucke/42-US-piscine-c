/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 09:34:03 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/25 22:38:57 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	nums[3];

	nums[0] = '0';
	while (nums[0] < '8')
	{
		nums[1] = nums[0] + 1;
		while (nums[1] < '9')
		{
			nums[2] = nums[1] + 1;
			while (nums[2] <= '9')
			{
				ft_putchar(nums[0]);
				ft_putchar(nums[1]);
				ft_putchar(nums[2]);
				if (nums[0] != '7' || nums[1] != '8' || nums[2] != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				nums[2]++;
			}
			nums[1]++;
		}
		nums[0]++;
	}
}
