all: main

main: main.o stack.o maze.o
	gcc $^ -o $@

clean:
	-rm main *.o *.d

.PHONY: clean

sources = main.c stack.c maze.c

include $(sources:.c=.d)

%.d: %.c
	set -e; rm -f $@; \
	$(CC) -MM $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

# pattern rule
# $^: 
#$@: 目标
#$^: 所有条件
#$<: 第一个条件
#$?: 所有比目标新的条件
