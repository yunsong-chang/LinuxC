all: 
	@echo $(foo)

foo = $(bar) 
bar = Huh? 

# step 1: 确定依赖关系
# step 2: 选择规则
