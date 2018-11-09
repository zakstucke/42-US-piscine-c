/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 17:41:10 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/02 15:42:37 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Returns an array [index_of_end_of_next_word, length (not including \0)]
** starting from the middle of the array.
** last_index is the end of the last word; (if first word just enter -1)
** if the length returned is 0, then there are no more words.
*/

int		*identify_word(int last_index, char *str)
{
	static int	info[2];

	info[0] = last_index + 1;
	info[1] = 0;
	if (str[info[0]] == '\0')
		return (info);
	while (str[info[0]] == ' ' || str[info[0]] == '\n'
			|| str[info[0]] == '\t')
		info[0]++;
	while (str[info[0]] != '\0' && str[info[0]] != ' '
			&& str[info[0]] != '\n' && str[info[0]] != '\t')
	{
		info[0]++;
		info[1]++;
	}
	info[0] = info[0] - 1;
	return (info);
}

int		no_of_words(char *str)
{
	int		words;
	int		*info;
	int		index;

	index = -1;
	words = 0;
	while (1)
	{
		info = identify_word(index, str);
		if (info[1] == 0)
			return (words);
		words++;
		index = info[0];
	}
}

/*
** Allocates space for the number of words (+ 1 for the null end array)
** Then allocates space for every string that fills that array (+ 1 for the \0)
** Point the last array to NULL (0)
** Fills the array with the strings and \0s.
*/

void	fill_array(char *str, char **arr)
{
	int		arr_index;
	int		str_index;
	int		*info;
	int		letters;

	arr_index = 0;
	str_index = -1;
	while (arr_index < no_of_words(str))
	{
		info = identify_word(str_index, str);
		letters = 0;
		str_index = info[0] - info[1] + 1;
		while (letters < info[1])
		{
			arr[arr_index][letters] = str[str_index];
			str_index++;
			letters++;
		}
		arr[arr_index][letters] = '\0';
		arr_index++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	char	**arr;
	int		arr_index;
	int		str_index;
	int		*info;

	arr = (char**)malloc(sizeof(char*) * (no_of_words(str) + 1));
	arr_index = 0;
	str_index = -1;
	while (arr_index < no_of_words(str))
	{
		info = identify_word(str_index, str);
		arr[arr_index] = (char*)malloc(sizeof(char) * (info[1]));
		str_index = info[0];
		arr_index++;
	}
	arr[arr_index] = 0;
	fill_array(str, arr);
	return (arr);
}
