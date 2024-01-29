FLAGS =-Wall -g
CC = gcc #if we want to change compiler

run: clean q1 q2 q3 q4

q1: 
	$(CC) $(FLAGS) -o q1 Q1.c 

q2: 
	$(CC) $(FLAGS) -o q2 Q2.c 

q3: 
	$(CC) $(FLAGS) -o q3 Q3.c 	

q4: 
	$(CC) $(FLAGS) -o q4 Q4.c 

.PHONY:clean
clean:
	rm -f *.o *.a *.out *.so q1 q2 q3 q4