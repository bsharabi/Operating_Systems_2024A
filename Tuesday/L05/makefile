CC = gcc
FLAGS = -Wall -g

run: clean q1 pointer
	./pointer



q1:
	$(CC) $(FLAGS) -o q1 Q1.c


pointer:
	$(CC) $(FLAGS) -o pointer pointer.c

clean:
	rm -f *.o *.out q1 pointer