main: main.o stack.o maze.o
	gcc main.o stack.o maze.o -o main

main.o: main.h stack.h maze.h
stack.o: stack.h main.h
maze.o: maze.h main.h

main.o: main.c
	gcc -c main.c

stack.o: stack.c
	gcc -c stack.c

maze.o: maze.c
	gcc -c maze.c

clean:
	-rm main *.o

.PHONY: clean
