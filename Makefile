all:
	gcc -g -Wall main.c para_allocator.c
clean:
	-rm *.o *.out cscope*
