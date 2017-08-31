all:
	gcc -g -Wall varg.c

objdump:
	obudump -dS a.out

clean:
	rm *.out cscope*

# 可变参数没有什么神奇的
# ap变量对栈地址进行操作
# a.c b.c是turbo c 2.0程序
# 可用cscope查看一下va_list等宏定义
