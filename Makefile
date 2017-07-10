SRC = calling_convention

all:
	gcc $(SRC).c -g

clean:
	-rm *.o *.out *.s

#__stdcall__: 函数清除栈中参数	ret 8	给调用者找麻烦 sub 8, esp
#__cdecl__:  Linux默认方式，栈参数在调用者中处理
#			参数是在栈内存中布局，而不是用push，pop指令


