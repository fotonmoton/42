# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 16:39:11 by gtertysh          #+#    #+#              #
#    Updated: 2016/11/10 21:44:18 by gtertysh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = src/
INC = headers/
MAIN = main/
FLAGS = -Wall -Wextra -Werror
LIB = libft.a


all: $(NAME)

lib:
	gcc -c $(SRC)*.c -I $(INC)
	ar cr $(LIB) *.o

$(NAME): lib
	gcc $(FLAGS) $(MAIN)*.c -L . -lft -I $(INC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(LIB)
	rm -f $(NAME)

