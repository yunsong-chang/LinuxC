KVERS = $(shell uname -r)

# Kernel modules
obj-m += export_symb.o
obj-m += use_symb.o

#巧妙的方法
#SRCS   = export_symb.c use_symb.c
#OBJS   = $(SRCS:.c=.o)
#obj-m += $(OBJS)

# Specify flags for the module compilation.
#EXTRA_CFLAGS=-g -O0

build: kernel_modules

kernel_modules:
	make -C /lib/modules/$(KVERS)/build M=$(CURDIR) modules

clean:
	make -C /lib/modules/$(KVERS)/build M=$(CURDIR) clean
	rm cscope*

# 输出与使用分成两个目录时，insmod_symb失败，dmesg中：
#			use_symb: no symbol version for add_integar
#			 use_symb: Unknown symbol add_integar

# u14.04  4.0.0  can    work	grep add_integar /proc/kallsyms只能找到一个T符号
# u10.04  2.6.32 cannot work			能找到3个r符号，一个t符号
# u12.04  3.11-0 cannot work
#
#为了使得u10和u12也能工作，需要先拷贝export_symb的Module.symbvers到use_symb目录下，在编译use_symb
#或者把export_symb和use_symb放在同一目录下一起编译, 见make_together
