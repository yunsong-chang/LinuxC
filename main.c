#include <stdio.h>

int main()
{
	char c = 'a';
	const char *p_C;
	p_C = &c;

	const char C = 'A';
	char *p_c;
	p_c = &C;
//warning: assignment discards qualifiers from pointer target type

	const char *p = "abcd";
	const char str1[5] = "abcd";
	char str2[5] = "abcd";

	printf(p);  // warning: format not a string literal and no format arguments

	printf(str1);
	printf(str2); // warning: format not a string literal and no format arguments
	printf("abcd");
	return 0;
}
