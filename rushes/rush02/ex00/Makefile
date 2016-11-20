# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/12 13:37:10 by gtertysh          #+#    #+#              #
#    Updated: 2016/11/13 21:51:43 by gtertysh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RUSH2 = rush-2
RUSH0 = rush-0
RUSH0SRC = src-rush-00/
RUSH2SRC = src-rush-02/*.c
INC = headers/
LIB = lib/
BIN = bin/
FLAGS = -Wall -Werror -Wextra

all: $(RUSH2) $(RUSH0)

$(RUSH2):
	@gcc $(FLAGS) $(RUSH2SRC) -I $(INC) -o $(BIN)$(RUSH2) -L $(LIB) -lft

$(RUSH0):
	@for number in 0 1 2 3 4 ; do \
		gcc $(FLAGS) $(RUSH0SRC)main.c $(RUSH0SRC)rush0$$number.c \
		-I $(INC) -o $(BIN)$(RUSH0)$$number -L $(LIB) -lft ; \
	done

fclean:
	@rm -f $(BIN)*

re: fclean all
