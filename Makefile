all:
	gcc -g -Wall main.c ret_allocator.c
clean:
	-rm *.o *.out cscope*
