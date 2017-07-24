#include <stdio.h>
#include <stddef.h>

int main()
{
	int i = 5;
	int *pi = &i;
	char c = 6;
	int *pc = (int *)&c;
	void *vp;
	pc = NULL;
	(void)pi;	// unused pi
	vp = pi;	// vp <--> p 不需要显示转换
	pi = vp;
	vp = pc;
	pc =vp;

	printf("Hello world\n");

	return 0;
}
