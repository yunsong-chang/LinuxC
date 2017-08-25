A:
	gcc -g -Wall A.c
	objdump -dS > A.txt
	gdb a.out

B:
	gcc -g -Wall -std=c99 B.c
	objdump -dS > B.txt
	gdb a.out
	
clean:
	-rm *.o *.out *.txt

# 数组元素的汇编表示
# gdb disassemble
# vi /<\main
# sizeof被gcc处理了，code中并没有
# 数组被  gcc处理了，code中并没有, 只不过表示为 地址+长度的方式
# 代码中无数组、sizeof
