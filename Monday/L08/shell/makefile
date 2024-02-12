FLAGS =-Wall -g
CC = gcc #if we want to change compiler

all: myShell
	valgrind --leak-check=full --error-exitcode=1 ./myShell

myShell:myShell.o myFunctionShell.o
	$(CC) $(FLAGS) -o myShell myShell.o myFunctionShell.o


myShell.o: myShell.c myShell.h
	$(CC) $(FLAGS) -c myShell.c 



myFunctionShell.o: myFunctionShell.c myFunctionShell.h
	$(CC) $(FLAGS) -c myFunctionShell.c 


	
.PHONY: clean
clean:
	rm -f *.o *.a *.so ./myShell