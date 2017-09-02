KVERS = $(shell uname -r)

# Kernel modules
obj-m += hello.o

# Specify flags for the module compilation.
EXTRA_CFLAGS=-g -O0		# objdump -dS xxx.ko 增加调试信息

build: kernel_modules

kernel_modules:
	make -C /lib/modules/$(KVERS)/build M=$(CURDIR) modules

clean:
	make -C /lib/modules/$(KVERS)/build M=$(CURDIR) clean
	rm cscope*

DIR = /lib/modules/$(KVERS)/build M=$(CURDIR) clean
test:
	@echo $(DIR)
