FLAGS =-Wall -g
CC = gcc #if we want to change compiler

all: main

main:main.o 
	$(CC) $(FLAGS) -o main main.o mat.o


main.o: main.c mat.h
	$(CC) $(FLAGS) -c main.c 


run:
	./main
	
.PHONY: clean
clean:
	rm -f *.o *.a *.so main