# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zstucke <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 16:14:02 by zstucke           #+#    #+#              #
#    Updated: 2018/11/11 19:10:58 by zstucke          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=eval_expr

SRCS=main.c general_functions.c operations.c solver_functions.c

all:
	gcc -Wextra -Werror -Wall -o $(NAME) $(SRCS)

clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)

re: clean all
