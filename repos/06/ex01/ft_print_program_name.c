/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 10:53:38 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/30 20:33:06 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		x;

	x = 0;
	if (argc >= 1)
	{
		while (argv[0][x] != '\0')
		{
			ft_putchar(argv[0][x]);
			x++;
		}
		ft_putchar('\n');
	}
	return (0);
}
