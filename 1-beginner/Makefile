SRC_LAST = $(shell sh -c "find . -type f -name '*.c' | sort | tail -n1 | cut -c3-")

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LINKS = -lm

OBJ = $(addprefix $(),$(SRC_LAST:%.c=%.o))

all: $(OBJ)
	$(CC) $(CFLAGS) $(SRC_LAST) $(LINKS) -o $(OBJ)

clean:
	rm -rf *.out
	rm -rf *.o

fclean: clean

r:
	./$(OBJ)

v:
	valgrind --leak-check=full ./$(OBJ)

.PHONY: all clean fclean r v
