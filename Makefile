foo = strfoo
bar = strbar
export foo
# 没有export不会传给子目录

all:
	make -C tmp

1:
	export foo=111; make -e  -C tmp

2:
	foo=222 make -e -C tmp

3:
	foo=333 make -C tmp
# 1,2,3种情况都能传给子目录

4:
	@echo $(bar)
# make 4
# bar=chang make 4
# bar=chang make -e 4


#
# make foo=3
# make命令行中定义的变量优先级最高，覆盖环境变量的定义和Makefile中的定义
# 环境变量
# 	1. shell中：export foo=3
#				make -e		(-e: 用环境变量的定义覆盖Makefile中的定义）
# 	2. foo=3 make 
#	3. foo=3 make -e
# Makefile中export foo 这些变量会自动传给make -C命令做环境变量
#
