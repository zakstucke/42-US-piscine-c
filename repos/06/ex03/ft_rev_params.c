/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 12:29:32 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/30 12:33:18 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		x;
	int		y;

	x = argc - 1;
	while (x > 0)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		ft_putchar('\n');
		x--;
	}
	return (0);
}
