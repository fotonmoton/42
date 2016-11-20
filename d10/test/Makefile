# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 12:38:53 by gtertysh          #+#    #+#              #
#    Updated: 2016/11/07 13:10:27 by gtertysh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog
SRC = main.c

all: compile

compile:
	@gcc -o $(NAME) $(SRC)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

test: fclean all
	@./$(NAME)
