all:
	as hello.s -o hello.o
	ld hello.o

debug:
	as hello.s -gstabs -o hello.o
	ld hello.o

clean:
	-rm *.o *.out

# 老版本的U2(gdb 7.1)有个bug：第一条指令处停不住; gdb 7.2没有此bug
# 下面是在老版本gdb中调试
# GDB debug
# 1. make debug
# 2. gdb a.out [-tui]
# 3. break *_start+1	打断点
# 4. run				执行
# display $eax
# display $ebx
# display 

# disassemble
# display /i $pc
