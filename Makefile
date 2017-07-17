all:
	gcc -g -Wall main.c

cpp:
	cpp main.c

clean:
	-rm *.o *.out cscope*
