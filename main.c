#define STR(s) # s
STR(hello 	world)
//"hello world"

#define STR(s) #s
fputs(STR(strncmp("ab\"c\0d", "abc", '\4"')
	== 0) STR(: @\n), s);
//fputs("strncmp(\"ab\\\"c\\0d\", \"abc\", '\\4\"') == 0" ": @\n", s);

#define CONCAT(a, b) a##b
CONCAT(con, cat)
//concat

#define HASH_HASH # ## #
HASH_HASH 
//##

#define showlist0(...) printf(__VA_ARGS__)
showlist0(The first, second, and third items.);
//printf(The first, second, and third items.);

#define showlist(...) printf(#__VA_ARGS__)
showlist(The first, second, and third items.);
//printf("The first, second, and third items.");


#define report(test, ...) ((test)?printf(#test):\
	printf(__VA_ARGS__))
report(x>y, "x is %d but y is %d", x, y);
// ((x>y)?printf("x>y"): printf("x is %d but y is %d", x, y));


#define FOOL(a) FOOL##a
FOOL(bar)
FOOL()

#define FOO(a, b, c) a##b##c
FOO(1,2,3)
FOO(1,2,)
FOO(1,,3)
FOO(,,3)
FOO()
// main.c:42:5: error: macro "FOO" requires 3 arguments, but only 1 given
// FOO


#define DEBUGP0(format, ...) printk(format, __VA_ARGS__)
DEBUGP0("info")
//printk("info",)

#define DEBUGP(format, ...) printk(format, ## __VA_ARGS__)
DEBUGP("info")
//printk("info")

int main(void)
{
	return 0;
}
