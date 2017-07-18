#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i;
	//for(i = 0; i < argc; i++)
	for(i=0; argv[i] != NULL; i++)
		printf("argv[%d]=%s\n", i, argv[i]);
	return 0;
}

#if 0
./a.out 1 2 3
ln -s a.out printarg.link

/bin/busybox: mv,cp,ls,ifconfig都是busybox的符号链接
#endif
