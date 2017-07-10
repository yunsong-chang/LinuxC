SRC=max

all:
	as $(SRC).s -o $(SRC).o
	ld $(SRC).o -o $(SRC)

debug:
	as $(SRC).s -gstabs -o $(SRC).o
	ld $(SRC).o

max2:
	as max2.s -o max2.o
	ld max2.o -o max2

main:
	gcc -g -Wall main.c -o main	

read-max-o:
	readelf -a max.o
objdump-max-o:
	objdump -d max.o

read-max:
	readelf -a max
objdump-max:
	objdump -d max

strip:
	strip max
	readelf -a max

file:
	file *

clean:
	-rm *.o *.out max max2 cscope* main

# hexdump -C max2 可以看到ascii字符串，在.data section
#
# gdb main
#(gdb) ptype e_type
#No symbol "e_type" in current context.
#(gdb) ptype Elf32_Half
#type = short unsigned int
#(gdb) ptype Elf32_Word
#type = unsigned int
#(gdb) ptype Elf32_Off
#type = unsigned int
#(gdb) ptype Elf32_Addr
#type = unsigned int

