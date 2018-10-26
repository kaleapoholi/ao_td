
CC=gcc
CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS=
EXEC=print
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all: $(EXEC)

print: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

main.o: print.h

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)
