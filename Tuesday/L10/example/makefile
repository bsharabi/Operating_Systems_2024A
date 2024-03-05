CC = gcc
FLAGS = -Wall -g
    
all: clean fork mypipe
	

fork:
	$(CC) $(FLAGS) -o fork fork.c

mypipe:
	$(CC) $(FLAGS) -o mypipe mypipe.c 
clean:
	rm -f *.o *.out mypipe 