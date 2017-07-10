#include <stdio.h>

int main(int argc, char *agrv[])
{
	int a=1;
	int b=2;
	int c=3;
	int d=4;
	int n = argc;

	int x[n];

	x[0]=5;
	x[1]=6;
	x[2]=7;
	
	__asm__("nop");
	d = sizeof x;
	__asm__("nop");

	return 0;
}

#if 0

可变数组x[n]的汇编代码非常大
值得吗？

#endif
