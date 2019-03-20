all: fibonacci


fibonacci: fibonacci.o
	gcc fibonacci.o -o fibonacci

fibonacci.o: fibonacci.c
	gcc fibonacci.c -c
	

clean:
	-rm *.o
	-rm fibonacci