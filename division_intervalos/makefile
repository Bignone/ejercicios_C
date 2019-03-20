all: division_intervalos


division_intervalos: division_intervalos.o
	gcc division_intervalos.o -o division_intervalos

division_intervalos.o: division_intervalos.c
	gcc division_intervalos.c -c
	

clean:
	-rm *.o
	-rm division_intervalos