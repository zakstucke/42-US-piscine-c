/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_functions.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 22:47:13 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/11 19:15:25 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERAL_FUNCTIONS_H
# define GENERAL_FUNCTIONS_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_putnbr_into_str(int nbr, char **str, int starting_index);
int		ft_atoi(char *str);

#endif
