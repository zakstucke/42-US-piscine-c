/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 12:33:58 by zstucke           #+#    #+#             */
/*   Updated: 2018/10/30 20:34:04 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		arr_length(char *arr)
{
	int		length;

	length = 0;
	while (arr[length] != '\0')
		length++;
	return (length);
}

int		ascii_sort(char *s1, char *s2)
{
	int		x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	if (s1[x] == '\0' && s2[x] == '\0')
		return (0);
	if (s1[x] == '\0')
		return (s1[x - 1] - s2[x]);
	else
		return (s1[x] - s2[x - 1]);
}

/*
** WARNING! If going to reuse this sort_arr_of_arrays function:
** it currently skips out the first index (as x = 2 just change to 1 if needed)
** Also, it sorts the indexes into ascending order
*/

int		*sort_arr_of_arrays(char **arr, int *order, int length)
{
	int		x;
	int		y;
	int		value;

	x = 2;
	while (x < length)
	{
		if (ascii_sort(arr[order[x - 1]], arr[order[x]]) > 0)
		{
			y = x - 1;
			value = order[x];
			while (ascii_sort(arr[order[y]], arr[value]) > 0 && y > 0)
			{
				order[y + 1] = order[y];
				y--;
			}
			order[y + 1] = value;
		}
		x++;
	}
	return (order);
}

int		main(int argc, char **argv)
{
	int		x;
	int		y;
	int		order[argc];

	x = 0;
	while (x < argc)
	{
		order[x] = x;
		x++;
	}
	sort_arr_of_arrays(argv, order, argc);
	x = 1;
	while (x < argc)
	{
		y = 0;
		while (argv[order[x]][y] != '\0')
		{
			ft_putchar(argv[order[x]][y]);
			y++;
		}
		x++;
		ft_putchar('\n');
	}
}
