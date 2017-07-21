#include <stdio.h>

int main()
{
	int i, j;

	fprintf(stdout, "input the int value i=\n");
	fscanf(stdin, "%d", &i);
	fprintf(stdout, "input the int value j=\n");
	fscanf(stdin, "%d", &j);
	fprintf(stdout, "i+j=%d\n",i+j);
	if (0 == j) {
		fprintf(stderr, "error j = %d\n", j);
	}

	return 0;
}

#if 0
	一切皆文件：设备也是文件（网卡、打印机）
	写文件：fprintf
	读文件：fscanf
#endif
