all:
	gcc -g -Wall main.c
reentrant:
	gcc -g -Wall main.c -DREENTRANT
	./a.out 'a/bbb///cc;xxx:yyy:' ':;' '/'
clean:
	-rm *.o *.out cscope*
