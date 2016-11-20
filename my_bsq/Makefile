# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/14 16:05:12 by gtertysh          #+#    #+#              #
#    Updated: 2016/11/15 16:10:36 by gtertysh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = src/*.c
INC = headers/
LIBSRC = lib_src/*.c
LIB = libft.a
FLAGS = -Wall -Werror -Wextra

all: $(LIB) $(NAME)

$(NAME): 
	gcc $(FLAGS) $(SRC) -I $(INC) -o $(NAME) -L . -lft

$(LIB):
	gcc -c $(FLAGS) $(LIBSRC) -I $(INC)
	ar cr $(LIB) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) $(LIB)

re: fclean all
