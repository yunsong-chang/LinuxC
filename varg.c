#include <stdio.h>
#include <stdarg.h>


void showchar(int, int, ...);


int main()
{
	showchar(8, 0xC, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h');
	return 0;
}

void showchar(int n, int color, ...)
{
	int a, ret;
	va_list ap;						// ap:保存栈地址

	va_start(ap, color);			// 'a'的地址

	for(a=0; a!=n; a++) 
	{
		ret = va_arg(ap, int);		// 'b'的地址
		printf("%#x\n", ret);
	}

	va_end(ap);						// 没有代码
}
