# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 11:55:54 by gtertysh          #+#    #+#              #
#    Updated: 2016/11/11 21:12:34 by gtertysh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btree
SRC = ../d13/*/*.c
INC = .
FLAGS = -Wall -Werror -Wextra

all: compile

compile:
	@clang main.c btree_print.c $(SRC) -I $(INC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean compile
