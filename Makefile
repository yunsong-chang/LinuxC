SRC = main

debug--version:
	gcc main.c xassert.c

nodebug--version:
	gcc main.c xassert.c -DNDEBUG

clean:
	-rm *.o *.out $(SRC)
