
SRC_LAST = $(shell sh -c "ls | grep .c | tail -n1")

CC = gcc

LINKS = -lm

all:
	$(CC) $(SRC_LAST) $(LINKS)

clean:
	rm -rf *.out
	rm -rf *.o

fclean: clean

run:
	./a.out
