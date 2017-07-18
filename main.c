#include <stddef.h>
#include <stdio.h>

int *foo(void)
{
	int a;
	int *pa;
	pa = &a;
	return pa;
}

int main(void)
{
	int *p = foo();
	(void)p;
	p = NULL;
	int A[] = {0,1,2,3};
	ptrdiff_t pd;
	p=A;
	p++;
	p++;
	pd = p - A;
	return 0;
}

#if 0
myscope()
{
	find /usr/include -maxdepth 1 -name "*.[ch]" > cscope.files
	find /usr/lib/gcc/i486-linux-gnu/4.4/include/ -maxdepth 1 -name "*.[ch]" >> cscope.files
	find . -name "*.[ch]" >> cscope.files
	cscope -bk
}

运行时再次-k: cscope -k, 以免重新生成cscope.out
#endif
