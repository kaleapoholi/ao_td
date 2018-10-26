OBJECTS=main.o enzyme.o pathway.o

CC = gcc -g 
PROG=enzyme
$(PROG):$(OBJECTS)
	$(CC) $(OBJECTS) -o $(PROG)
main.o: main.c pathway.h enzyme.h
	$(CC) -c main.c 
enzyme.o: enzyme.c enzyme.h
	$(CC) -c enzyme.c 
pathway.o: pathway.c pathway.h enzyme.h
	$(CC) -c pathway.c 