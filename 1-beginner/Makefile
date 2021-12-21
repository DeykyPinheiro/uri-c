NAME = beginner

SRC_LAST = $(shell sh -c "find . -type f -name '*.c' | sort | tail -n1 | cut -c3-")

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LINKS = -lm

RM = rm -rf

OBJ = $(SRC_LAST:.c=.o)

all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC_LAST) $(LINKS) -o $(NAME)

$(OBJ): $(SRC_LAST)
	$(CC) $(CFLAGS) $(SRC_LAST) -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

r:	all
	./$(NAME)

v:
	valgrind --leak-check=full ./$(NAME)

.PHONY: all clean fclean r v
