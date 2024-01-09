CC = gcc
FLAGS = -Wall -g

all: main

main:main.o math.o
	$(CC) $(FLAGS) -o run main.o math.o
	
main.o:main.c math.h
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.out main main1