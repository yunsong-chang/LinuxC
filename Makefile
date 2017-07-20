all:
	gcc -g -Wall main.c para_callback.c
clean:
	-rm *.o *.out cscope*
