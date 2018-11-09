/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstucke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:15:02 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/02 16:27:36 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_THE_WORLD "SPY"
# include <string.h>

typedef struct		s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
}					t_perso;

#endif
