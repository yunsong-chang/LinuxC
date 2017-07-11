SRC = main

all:
	gcc $(SRC).c -g

clean:
	-rm *.o *.out 
