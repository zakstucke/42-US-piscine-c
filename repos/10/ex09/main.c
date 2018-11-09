/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:01:17 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/06 21:33:47 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
#include "ft_opp.h"

void	ft_usage(char **argv)
{
	(void)argv;
	ft_putstr("error : only [ + - * / % ] are accepted.");
}

int		main(int argc, char **argv)
{
	int		success;
	int		x;
	int		size;

	if (argc == 4)
	{
		x = 0;
		success = 0;
		size = sizeof(g_opptab) / sizeof(g_opptab[0]);
		while (x < size)
		{
			if (g_opptab[x].oper[0] == argv[2][0])
			{
				(g_opptab[x].funcptr)(argv);
				success = 1;
				break ;
			}
			x++;
		}
		if (success == 0)
			(g_opptab[5].funcptr)(argv);
		ft_putchar('\n');
	}
	return (0);
}
