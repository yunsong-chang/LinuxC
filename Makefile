all:
	gcc -g -Wall main.c redirect_ptr.c
clean:
	-rm *.o *.out cscope*
