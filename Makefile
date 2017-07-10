SRC=main

all:
	gcc $(SRC).c -g

objdump:
	objdump -dS a.out

S:
	gcc -S main.c

clean:
	-rm *.o *.out *.s

# gdb的使用
# gdb a.out [-tui]
# display /i $pc	显示汇编指令
# x /20 $esp		显示栈
# help x			帮助
# disassemble		反汇编
# info registers 	反汇编
# bt、frame、info locals 显示栈帧
