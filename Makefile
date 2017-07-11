SRC = main

all:
	gcc $(SRC).c -Wall -g

clean:
	-rm *.o *.out 
