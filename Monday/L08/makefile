FLAGS =-Wall -g
CC = gcc #if we want to change compiler

all: myShell
	./myShell

myShell:myShell.o 
	$(CC) $(FLAGS) -o myShell myShell.o 


myShell.o: myShell.c myShell.h
	$(CC) $(FLAGS) -c myShell.c 



myFunctionShell.o: myFunctionShell.c myFunctionShell.h
	$(CC) $(FLAGS) -c myFunctionShell.c 


	
.PHONY: clean
clean:
	rm -f *.o *.a *.so ./myShell