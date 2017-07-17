x1 := foo
y1 := $(x1) bar

y2 := $(x2) bar
x2 := foo

y3 = $(x3) bar
x3 = foo

all: 
	@echo "-$(y1)-"		# y1: foo bar
	@echo "-$(y2)-"		# y2: 空格bar	立即展开
	@echo "-$(y3)-"		# y3：foo bar 	后展开
