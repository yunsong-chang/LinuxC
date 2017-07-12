SRC = main

all:
	gcc $(SRC).c -Wall -g

O:
	gcc $(SRC).c -Wall -g -O

volatile:
	gcc $(SRC)_volatile.c -Wall -g -O

clean:
	-rm *.o *.out 

# 多次读、多次写设备是有意义的
# 禁止编译器优化: volatile，但若加了-O选项对中间变量还是会用寄存器缓存
#				  volatile变量：不会省略对变量的每一次内存读写，但有可能数据来自cache而不是内存
#						程序的指令中只有寄存器、内存地址，没法操控cache, cache对程序是透明的
# 禁止cache
