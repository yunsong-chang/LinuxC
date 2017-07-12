SRC = main

all:
	gcc main.c -g -Wall

inline:
	gcc main.c -g -Wall -O

clean:
	-rm *.o *.out $(SRC)
