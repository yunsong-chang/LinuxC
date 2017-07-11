#include <stdio.h>

typedef union {
	struct {
		unsigned int one:1;
		unsigned int two:3;
		unsigned int three:10;
		unsigned int four:5;
		unsigned int :2;
		unsigned int five:8;
		unsigned int six:8;
	} bitfield;
	unsigned char byte[8];
} demo_type;

int main(void)
{
	demo_type u = {{ 1, 5, 513, 17, 129, 0x81 }};
	demo_type u2 = { .byte = {0x1c, 0x60, 0x24, 0x10, 0x81, 0, 0, 0} };
// c99 memberwise初始化语法,但不需要加-std=c99
	u = u2;
// 两结构体变量可相互赋值
// 两联合体变量可相互赋值
// 但两个数组变量不能相互赋值,数组做右值是指针，类型不匹配
	int A[] = {1, 2, 3};
	int B[] = {1, 2, 3};
	//A = B;
//# main.c:28: error: incompatible types when assigning to type ‘int[3]’ from type ‘int *’

	printf("sizeof demo_type = %u\n", sizeof(demo_type));
	printf("values: u=%u,%u,%u,%u,%u,%u\n",
	       u.bitfield.one, u.bitfield.two, u.bitfield.three,
	       u.bitfield.four, u.bitfield.five, u.bitfield.six);

	printf("hex dump of u: %x %x %x %x %x %x %x %x \n",
	       u.byte[0], u.byte[1], u.byte[2], u.byte[3],
	       u.byte[4], u.byte[5], u.byte[6], u.byte[7]);
// 格式化输出 %#x 会自动打印0x
	printf("again hex dump of u: %#x %#x %#x %#x %#x %#x %#x %#x \n",
	       u.byte[0], u.byte[1], u.byte[2], u.byte[3],
	       u.byte[4], u.byte[5], u.byte[6], u.byte[7]);

	return 0;
}
