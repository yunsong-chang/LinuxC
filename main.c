#include <stdio.h>

int a = 20;

void foo(void)
{
	int a = 3, LL;

	a = 4;
	goto LL;
	a = 5;
LL:
	LL =a;
}

struct TTT {
	int a;
	int b;
};

union TtT {
	int a;
	char b;
};

enum Ttt {b=2,c=3};

int main(void)
{
	static int a = 40;
	struct TTT st;
//	int b = 8;

	int TTT = 100;

	a = b;
	
	printf("Hello world %d\n", a);
	printf("Hello world %d\n", TTT);

	return 0;
}

// struct TTT: int TTT
// LL标号：int LL
// Tag不能同名，tag和变量可同名
// enum等类型，是编译的东西
