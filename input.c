#include <stdio.h>

int main()
{
	int flag = 1;
	int i;
	int count = 0;
	int s = 0;

	//printf("please input int list:\n");
	//上游管道不能有多余输出
	while (flag) {
		scanf("%d", &i);
		if (0 == i) break;
		count++;
		s += i;
	}

	printf("%d, %d\n", s, count);
	return 0;
}
