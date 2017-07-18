all:
	gcc -g -Wall main.c

redirection:
	./a.out 1>1.txt 2>2.txt <input.txt

clean:
	-rm *.out *.o 1.txt 2.txt
