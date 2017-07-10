#include <stdio.h>

struct var_data {
	int len;
	int data[0];
};

#if 0
int main()
{
	int i;

	int a=1;
	int b=2;
	int c=3;
	int d=4;
	struct var_data s;
	s.len=4;

	for(i = 0; i < s.len; i++)
		printf("%#x\n", s.data[i]);

	return 0;
}
#endif 



int main()
{
	int a=1;
	int b=2;
	int c=3;
	int d=4;

	struct var_data s;
	s.len=5;
	__asm("nop");
	s.len=sizeof s;
	__asm__("nop");

	printf("%#x\n", s.data[0]);		// d
	printf("%#x\n", s.data[1]);		// c
	printf("%#x\n", s.data[2]);		// b
	printf("%#x\n", s.data[3]);		// a

	return 0;
}

#if 0
栈变量 由高到低
sizeof s = 4， 0数组没有分配空间
__asm与__asm__都可以
#endif
