/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:57:05 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/08 22:23:28 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		ticker;

	ticker = 0;
	while (str[ticker] != '\0')
	{
		ft_putchar(str[ticker]);
		ticker++;
	}
}

int		main(int argc, char **argv)
{
	char	buffer[BUFFER_SIZE + 1];
	int		fd;
	int		ret;

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		ret = read(fd, buffer, BUFFER_SIZE);
		while (ret != 0 && fd != -1)
		{
			buffer[ret] = '\0';
			ft_putstr(buffer);
			ret = read(fd, buffer, BUFFER_SIZE);
		}
		close(fd);
	}
	return (0);
}
