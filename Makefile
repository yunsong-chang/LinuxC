zero:
	gcc -g -Wall array_zero.c

var:
	gcc -g -Wall array_var.c

objdump:
	objdump -dS a.out

clean:
	rm *.o *.out
