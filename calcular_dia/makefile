all: calcular_dia


calcular_dia: calcular_dia.o
	gcc calcular_dia.o -o calcular_dia

calcular_dia.o: calcular_dia.c
	gcc calcular_dia.c -c
	

clean:
	-rm *.o
	-rm calcular_dia