SRC = main

all:
	gcc main.c stack/stack.c -o main -Wall -Istack

B:
	gcc main-B.c stack/stack.c -Wall
# main-B.c： 把头文件的相对路径hard code在代码中

clean:
	-rm *.o *.out main

