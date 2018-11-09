/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_board.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokarev <atokarev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 20:58:58 by atokarev          #+#    #+#             */
/*   Updated: 2018/11/03 22:56:10 by atokarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATE_BOARD_H
# define CREATE_BOARD_H

# include <stdlib.h>

int		**create_board(int argc, char **argv, int **board);
int		*parse_line(char *line_read, int *line_write);

#endif
