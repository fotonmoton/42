# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/16 20:23:31 by gtertysh          #+#    #+#              #
#    Updated: 2016/11/16 20:57:41 by ykolomie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC =	./srcs/main.c \
		./srcs/read.c \
		./srcs/bsq.c \
		./srcs/find_max.c \
		./srcs/output.c \
		./srcs/corr_map.c
OBJ = $(SRC:.c=.o)
INC = -I ./includes
NAME = bsq

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(INC) $(OBJ) -o $(NAME)

.c.o:
	$(CC) $(FLAGS) $(INC) -c $<  -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

