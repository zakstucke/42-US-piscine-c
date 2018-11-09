/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokarev <atokarev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 20:55:52 by atokarev          #+#    #+#             */
/*   Updated: 2018/11/04 12:47:57 by zstucke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include "create_board.h"
# include "solve_board.h"

int		check_box(t_position empty_spot, int check_num, int **board);
int		check_row(int row, int check_num, int **board);
int		check_column(int column, int check_num, int **board);
int		solve_board(int **board, t_position *empty_spots);

#endif
