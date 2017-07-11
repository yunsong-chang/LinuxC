#include <stdio.h>

int main(int argc, char** argv)
{
	struct {
		char a;
		short b;
		int c;
		char d;
	} s;

	s.a = 1;
	s.b = 2;
	s.c = 3;
	s.d = 4;
	printf("%u\n", sizeof(s));

	__asm__("nop");
	__asm__("nop");

	struct {
		char a;
		short b;
		int c;
		char d;
	} __attribute__((packed)) s2;

	s2.a = 1;
	s2.b = 2;
	s2.c = 3;
	s2.d = 4;
	printf("%u\n", sizeof(s2));
	
	return 0;
}
