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
	va_list ap;

	va_start(ap, color);

	for(a=0; a!=n; a++) 
	{
		ret = va_arg(ap, int);
		printf("%#x\n", ret);
	}

	va_end(ap);
} 
