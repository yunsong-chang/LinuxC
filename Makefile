all:
	gcc -g -Wall main.c populator.c populator.h
clean:
	-rm *.o *.out cscope*
