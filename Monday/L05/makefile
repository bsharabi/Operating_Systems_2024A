FLAGS =-Wall -g
CC = gcc #if we want to change compiler

run: clean pointer
	./pointer

strings: 
	$(CC) $(FLAGS) -o strings strings.c 

pointer: 
	$(CC) $(FLAGS) -o pointer pointer.c 

	
.PHONY:clean
clean:
	rm -f *.o *.a *.out *.so strings pointer