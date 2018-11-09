/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 15:36:33 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/02 10:17:27 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

# define TRUE 1
# define FALSE 0

# define SUCCESS 0

# define EVEN(x) !(x % 2)

typedef int		t_bool;

void			ft_putstr(char *str);

t_bool			ft_is_even(int nbr);

#endif
