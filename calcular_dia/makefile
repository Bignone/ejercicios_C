CFLAGS = -c -g -Wall
OFLAGS = -o
CLEAN = -c

all: calcular_dia


calcular_dia: calcular_dia.o
	gcc calcular_dia.o $(OFLAGS) calcular_dia

calcular_dia.o: calcular_dia.c
	gcc calcular_dia.c $(CLEAN) $(CFLAGS)
	

clean:
	-rm *.o
	-rm calcular_dia