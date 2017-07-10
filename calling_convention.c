#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int __attribute__((__cdecl__)) add_c(int a, int b) 
{
    return a + b;
}

int __attribute__((__stdcall__)) add_s(int a, int b) 
{
    return a + b;
}

int add_p(int a, int b)
{
	int c;
	
	c = a + b;
	return c;
}

int __attribute__((__cdecl__)) add_c_p(int a, int b) 
{
	int c;
	
	c = a + b;
	return c;
}

int __attribute__((__stdcall__)) add_s_p(int a, int b) 
{
	int c;
	
	c = a + b;
	return c;
}

int main()
{
	int a, b, c;
	
	a = 3; 
	b = 9;

	c = add(a, b);	
	c = add_c(a, b);	
	c = add_s(a, b);	

	c = add_p(a, b);	
	c = add_c_p(a, b);	
	c = add_s_p(a, b);	

	printf("a=%d, b=%d, c=%d", a, b, c);
	return 3;
}
