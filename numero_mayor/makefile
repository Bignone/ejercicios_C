all: selector


selector: selector.o
	gcc selector.o -o selector

selector.o: selector.c
	gcc selector.c -c
	

clean:
	-rm *.o
	-rm selector