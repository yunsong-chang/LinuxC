all:
	as hello.s -o hello.o
	ld hello.o

debug:
	as hello.s -gstabs -o hello.o
	ld hello.o

clean:
	-rm *.o *.out cscope* helloworld

main:
	gcc -g -Wall main.c
main2:
	gcc -g -Wall main2.c
#用cscope查看exit/_exit函数原型
#exit/_exit都是C库对sys call的封装
#用gdb ptype查看原型

helloworld:
	nasm -f elf helloworld.asm
	ld -m elf_i386 -s -o helloworld helloworld.o
#nasm编译出的exe用下面的方法才能被gdb调试
helloworld-debug:
	nasm -f elf helloworld-debug.asm -g -F stabs -o helloworld.o
	gcc -o helloworld helloworld.o -g

# 老版本的U2(gdb 7.1)有个bug：第一条指令处停不住; gdb 7.2没有此bug
# 下面是在新版本gdb中调试
# GDB debug
# 1. make debug
# 2. gdb a.out [-tui]
# 3. break *_start		打断点
# 4. run				执行
# display $eax
# display $ebx
# display 

# disassemble
# display /i $pc
