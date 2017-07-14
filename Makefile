SRC = main

cpp:
	cpp main.c

E:
	gcc -E main.c

clean:
	-rm *.o *.out $(SRC)
