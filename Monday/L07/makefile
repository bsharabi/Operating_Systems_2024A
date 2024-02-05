FLAGS =-Wall -g
CC = gcc #if we want to change compiler

run: clean allocate
	./allocate

runf:clean allocateFree
	valgrind --leak-check=full --error-exitcode=1 ./allocateFree

allocate: 
	$(CC) $(FLAGS) -o allocate allocate.c 

allocateFree: 
	$(CC) $(FLAGS) -o allocateFree allocateFree.c 


.PHONY:clean
clean:
	rm -f *.o *.a *.out *.so allocate allocateFree