CC = gcc
FLAGS = -Wall -g

s: clean strings runS

i: clean input runI

strings:
	$(CC) $(FLAGS) -o strings strings.c
	
input:
	$(CC) $(FLAGS) -o input input.c

runS:
	./strings

runI:
	./input

clean:
	rm -f *.o *.out strings input