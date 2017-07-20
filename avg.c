#include <stdio.h>

int main()
{
	int s, n;
	scanf("%d, %d", &s, &n);

	float v = 1.0*s/n;
	printf("avg=%f\t\tcount=%d\n", v, n);

	return 0;
}
