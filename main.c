#include <stdio.h>

void foo()
{

}

//static void foo();
//# main.c:8: error: static declaration of ‘foo’ follows non-static declaration
//# main.c:3: note: previous definition of ‘foo’ was here

static void bar()
{

}

//extern static void bar();
//# main.c:22: error: multiple storage classes in declaration specifiers

void bar();
static void bar();
extern void bar();
void foo();
extern void foo();
//# main.c:20: warning: ‘bar’ defined but not used
//? 非static的foo()没有未使用警告：全局的函数可能在别的地方被调用，所以没有警告

extern int first = 100;
//# main.c:24: warning: ‘firstDelcare’ initialized and declared ‘extern’

int a;
int a;
int a = 10;
//int a = 11;
//main.c:32: error: redefinition of ‘a’
//main.c:31: note: previous definition of ‘a’ was here
extern int a;
extern int a;

static int b;
static int b = 9;
extern int b;
//extern static int b;
//# main.c:37: error: multiple storage classes in declaration specifiers
//? main.c:35: warning: ‘b’ defined but not used
// static变量，与static函数一样，没有使用会警告；而全局变量和函数，即使不使用也无警告

typedef int my_int;
int main(void)
{
	extern int a;  // 全局变量，有externla linkage，可多次声明
	extern int b;  // 全局变量.static, 有internal linkage，可多次声明

	int x;
//	extern int x; // 局部变量.栈，无linkage， 不用多次声明
//  error: extern declaration of ‘x’ follows declaration with no linkage
	
	static int y;
//	extern int y;	// 局部变量.static，无linakge，不用多次声明
// error: extern declaration of ‘y’ follows declaration with no linkage

	static const my_int my = 1;
	
	return 0;
}

// no linkage				局部变量 
// external linkage			全局变量 
// internal linkage.static	全局变量 
