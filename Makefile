SRC = main

all:
	gcc main.c stack.c -o main -Wall

step:
	gcc -c main.c -Wall
	gcc -c stack.c -Wall
	gcc main.o stack.o -o main -Wall

A:
	gcc test-A.c

B:
	gcc test-B.c

B-Wall:
	gcc test-B.c -Wall

M:
	gcc main.c stack.c

clean:
	-rm *.o *.out main

# 多文件编译，C文件的顺序就是函数在.text中的顺序

# 多文件debug
# l stack.c:1 				load file
# b push
# b stack.c:10				打pop断点


# 单文件隐式声明			返回值int，参数根据调用推测
# gcc test-A.c				警告1:隐式  警告2：重复声明
# gcc test-B.c				无警告  int threeline()是对的
# gcc test-B.c -Wall		警告1：隐式

# 多文件
# gcc main.c stack.c		无警告	int is_empty()是对的
# gcc main.c stack.c -Wall	警告1:隐式

