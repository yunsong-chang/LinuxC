#include <stdio.h>

void myfunc(void)
{
	printf("__func__=%s\n", __func__);
	printf("__FUNCTION__=%s\n", __FUNCTION__);
	printf("__PRETTY_FUNCTION__=%s\n", __PRETTY_FUNCTION__);
	printf("__PRETTY_FUNCTION__=%s\n", __PRETTY_FUNCTION__);
	printf("__LINE__=%d\n", __LINE__);
	printf("__FILE__=%s\n", __FILE__);
}

int main(void)
{
	myfunc();
	printf("%s\n", __func__);
	return 0;
}

// C99支持__func__, 以前GNU C预定义了__FUNCTION__ __PRETTY_FUNCTION__
// 现在Linux用__func__, 不用__FUNCTION__
// CPP main.c 可以看到__LINE__, __FILE的替换，而看不到__func__
// 因此判断__func__是变量名而不是宏
