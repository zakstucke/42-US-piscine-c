/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:57:05 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/08 22:29:23 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#define BUFFER_SIZE 1

void	ft_putstr(int output, char *str)
{
	while (*str != '\0')
	{
		write(output, str, 1);
		str++;
	}
}

void	read_write(void)
{
	char	c;

	while (read(STDIN_FILENO, &c, 1) != 0)
		write(1, &c, 1);
}

void	handle_error(int ticker, char **argv)
{
	if (errno == 2)
	{
		ft_putstr(2, "cat: ");
		ft_putstr(2, argv[ticker]);
		ft_putstr(2, ": No such file or directory\n");
	}
	else if (errno == 21)
	{
		ft_putstr(2, "cat: ");
		ft_putstr(2, argv[ticker]);
		ft_putstr(2, ": Is a directory\n");
	}
}

void	handle_files(char **argv, int ticker, char *buffer)
{
	int		ret;
	int		fd;

	fd = open(argv[ticker], O_RDONLY);
	if (fd < 0)
		handle_error(ticker, argv);
	else
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		if (errno == 21)
			handle_error(ticker, argv);
		else
		{
			while (ret != 0)
			{
				buffer[ret] = '\0';
				ft_putstr(1, buffer);
				ret = read(fd, buffer, BUFFER_SIZE);
			}
		}
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	char	buffer[BUFFER_SIZE + 1];
	int		ticker;

	if (argc == 1)
		read_write();
	else
	{
		ticker = 1;
		while (ticker < argc)
		{
			handle_files(argv, ticker, buffer);
			ticker++;
		}
	}
	return (0);
}
