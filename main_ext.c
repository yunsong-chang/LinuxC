#include <stdio.h>

__asm__(".ascii  \"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\"");
const int A = 10;
__asm__(".ascii  \"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb\"");
int a = 20;
static int b = 30;
int c;
__asm__(".ascii  \"333333333333333333333333333333333333333333333333333\"");

int main(void)
{
	__asm__(".ascii  \"111111111111111111111111111111111111111111111111111\"");
	__asm__("nop"); __asm__("nop"); __asm__("nop"); __asm__("nop");
	__asm__("nop"); __asm__("nop"); __asm__("nop"); __asm__("nop");
	__asm__("nop"); __asm__("nop"); __asm__("nop"); __asm__("nop");
	__asm__("nop"); __asm__("nop"); __asm__("nop"); __asm__("nop");
	static int a = 40;
	char b[] = "Hello worldDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
	register int c = 50;

	printf("Hello worlddddddddddddddddddddddddddddddddddddddddddddddddddddddddd %d\n", c);

	__asm__("nop"); __asm__("nop"); __asm__("nop"); __asm__("nop");
	__asm__("nop"); __asm__("nop"); __asm__("nop"); __asm__("nop");
	__asm__("nop"); __asm__("nop"); __asm__("nop"); __asm__("nop");
	__asm__("nop"); __asm__("nop"); __asm__("nop"); __asm__("nop");
	__asm__(".ascii  \"222222222222222222222222222222222222222222222222222\"");
	return 0;
}
