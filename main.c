#include <stdio.h>

int main()
{
	int i, j;

	printf("input the int value i=\n");
	scanf("%d", &i);
	printf("input the int value j=\n");
	scanf("%d", &j);
	printf("i+j=%d\n",i+j);
	if (0 == j) {
		fprintf(stderr, "error j = %d\n", j);
	}

	return 0;
}

#if 0
输入输出
重定向

./a.out 1>1.txt 2>2.txt <input.txt

input.txt:
8
0

#endif
