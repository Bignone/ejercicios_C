all: selector


conversor: selector.o
	gcc selector.o -o selector

conversor.o: selector.c
	gcc selector.c -c
	

clean:
	-rm *.o
	-rm selector