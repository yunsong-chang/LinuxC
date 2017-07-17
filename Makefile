objects = main.o
objects += $(foo)		# += 保持=后展开（先确定依赖，后展开变量）
foo = foo.o bar.o

hou_zhankai:
	@echo $(objects)

objs := main.o
objs += $(bar)			# += 保持:=立即展开
bar = foo.o bar.o

liji_zhankai:
	@echo $(objs)
