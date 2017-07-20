all:
	gcc -g -Wall main.c generics.c
clean:
	-rm *.o *.out cscope*
