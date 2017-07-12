SRC = main

#使用静态库：main中只含有push
share:so
	gcc main.c -L. -lstack -Istack -o main

#把共享库的路径编到main中
hardpath:so
	gcc main.c -L. -lstack -Istack -o main -Wl,-rpath,/home/u2/github/LinuxC

static:ar
	gcc main.c -L. -lstack -Istack -o main

static:ar
	gcc main.c -static -L. -lstack -Istack -o main
# -static: exe 578,016 所有符号都是确定的，不会用到Libc的动态链接
# 相对应:  exe   7,252 有U符号，会用到Libc的动态链接

ar:obj-stack
	ar rs libstack.a stack.o push.o pop.o is_empty.o

obj-stack:
	gcc -c -g stack/stack.c stack/push.c stack/pop.c stack/is_empty.c

fpic:
	gcc -c -g -fPIC stack/stack.c stack/push.c stack/pop.c stack/is_empty.c

so:fpic
	gcc -shared -o libstack.so stack.o push.o pop.o is_empty.o

soname:fpic
	gcc -shared -Wl,-soname,libstack.so.1 -o libstack.so.1.0 stack.o push.o is_empty.o

only_exe:
	gcc main.c -L. -lstack -Istack -o main

#不编译成静态库：main中包含所有函数pop, is_empty, push
#静态库：main中选择性包含库函数
norm:obj-stack
	gcc main.c stack.o push.o pop.o is_empty.o -Istack -o main
	
#打印库文件的默认搜索路径
print:
	gcc --print-search-dirs

run:
	LD_LIBRARY_PATH=. ./main

clean:
	-rm *.o *.out $(SRC) *.a libstack*
