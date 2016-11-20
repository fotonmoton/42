# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 13:45:08 by gtertysh          #+#    #+#              #
#    Updated: 2016/11/07 16:09:06 by gtertysh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ./srcs
OBJ	= ./objs
INC = ./includes
all: $(NAME)

$(NAME):
	@gcc -c 		./srcs/ft_putchar.c \
					./srcs/ft_putstr.c	\
					./srcs/ft_swap.c	\
					./srcs/ft_strlen.c	\
					./srcs/ft_strcmp.c	\
					-I $(INC)
	@ar cr $(NAME)	./ft_putchar.o	\
					./ft_putstr.o	\
					./ft_strcmp.o	\
					./ft_swap.o		\
					./ft_strlen.o

clean:
	@/bin/rm -f ./*.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
