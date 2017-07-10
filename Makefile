SRC = main

all:
	gcc $(SRC).c -g

#C中利用汇编指令__asm__(".ascii  \"aaaa\"");
#结合hexdump -C a.out
#一目了然sectionr: text, rodata, data在file中的布局
#以及变量在内存中的布局
ext:
	gcc main_ext.c -g

clean:
	-rm *.o *.out 
