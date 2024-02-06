CC = gcc
FLAGS = -Wall -g

all: clean allocateF
	valgrind --leak-check=full --error-exitcode=1 ./allocateF

run: clean allocate q1
	
	

allocate:
	$(CC) $(FLAGS) -o allocate allocate.c

allocateF:
	$(CC) $(FLAGS) -o allocateF allocateF.c

q1:
	$(CC) $(FLAGS) -o q1 q1.c

clean:
	rm -f *.o *.out allocate  allocateF