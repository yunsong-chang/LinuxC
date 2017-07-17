main: main.o stack.o maze.o
	gcc main.o stack.o maze.o -o main

main.o: main.h stack.h maze.h
stack.o: stack.h main.h
maze.o: maze.h main.h

#%.o: %.c
# implicit rule
#	^I$ 有个空的TAB，maze.o走了一个空命令，故没有生成maze.o
# 诡异的错误: Makefile中不要有多余的TAB, cat -A Makefile

clean:
	-rm main *.o

.PHONY: clean
