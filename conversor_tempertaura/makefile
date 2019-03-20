all: conversor


conversor: conversor.o
	gcc conversor.o -o conversor

conversor.o: conversor.c
	gcc conversor.c -c
	

clean:
	-rm *.o
	-rm conversor