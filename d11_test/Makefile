# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 11:55:54 by gtertysh          #+#    #+#              #
#    Updated: 2016/11/09 18:40:42 by gtertysh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = list
SRC = ../d11/*/*.c
INC = .
FLAGS = -Wall -Wextra

all: compile

compile:
	@gcc $(FLAGS) main.c ft_list_print.c $(SRC) -I $(INC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean compile
