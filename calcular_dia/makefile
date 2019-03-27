CFLAGS = -c -g -Wall
OFLAGS = -o

all: calcular_dia


calcular_dia: calcular_dia.o bisiest/bisiest.o
	gcc calcular_dia.o bisiest.o $(OFLAGS) calcular_dia

bisiest/bisiest.o: bisiest/bisiest.c
	gcc bisiest/bisiest.c $(CFLAGS)

calcular_dia.o: calcular_dia.c
	gcc calcular_dia.c $(CFLAGS)
	

clean:
	-rm *.o
	-rm calcular_dia