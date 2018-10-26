#OBJECTS=main.o print.o

#CC = gcc -g 
#SRC=$(wildcard *.c)
#PROG=td
#$(PROG):$(OBJECTS)
#	$(CC) $(OBJECTS) -o $(PROG)
#main.o: main.c print.h
#	$(CC) -c main.c
#print.o: print.c print.h
#	$(CC) -c print.c
#clean:
#	rm -f main.o main
 
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