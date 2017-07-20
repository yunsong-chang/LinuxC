all: avg.c input.c
	gcc -g -Wall avg.c -o avg.out
	gcc -g -Wall input.c -o input.out

pipe:
	./input.out | ./avg.out
#input
#3
#4
#5
#0
#avg=4.00   count=3

clean:
	-rm *.out *.o
