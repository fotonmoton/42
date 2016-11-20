# MAkefile
# AUTHOR:   foton
# FILE:     Makefile
# ROLE:     to compile them all
# CREATED:  2016-11-20 00:59:16
# MODIFIED: 2016-11-20 01:14:41

NAME = brainfuck
CC = clang
FLAGS = -Wall -Werror -Wextra
SRC = src/main.c \
	  src/output.c \
	  src/brainfuck.c
OBJ = $(SRC:.c=.o)
INC = -I inc/

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) $(INC) -o $(NAME)

.c.o: $(SRC)
	$(CC) $(FLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(BIN)$(NAME)

re:
	fclean all
