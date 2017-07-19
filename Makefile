all:
	gcc -g -Wall main.c ret_ptr.c
clean:
	-rm *.o *.out cscope*
