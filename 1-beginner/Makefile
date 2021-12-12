SRC_LAST = $(shell sh -c "find . -type f -name '*.c' | sort | tail -n1 | cut -c3-")

CC = gcc

LINKS = -lm

OBJ = $(addprefix $(),$(SRC_LAST:%.c=%.o))

all: $(OBJ)
	$(CC) $(SRC_LAST) $(LINKS) -o $(OBJ)

clean:
	rm -rf *.out
	rm -rf *.o

fclean: clean

run:
	./$(OBJ)

r:
	$(SRC_LAST)
