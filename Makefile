SRC = main

all:
	gcc $(SRC).c -Wall -g

objdump:
	objdump -dS a.out > txt

clean:
	-rm *.o *.out  *txt

# vi txt
# /\<main
#
# gdb disassemble
