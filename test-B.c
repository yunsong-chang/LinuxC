#include <stdio.h>

int main(void)
{
	printf("Three lines:\n");
	threeline();
	printf("Another three lines.\n");
	threeline();
	return 0;
}

void newline(void)
{
	printf("\n");
}

int threeline(void)
{
	newline();
	newline();
	newline();
	
	return 0;
}
