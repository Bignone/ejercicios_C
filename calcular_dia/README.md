# Calcular dia a partir de fecha

Para este ejercicio se deberá realizar un programa que calcule cuál es el día del año
correspondiente a una fecha dada, esto es, el número de días transcurridos desde el 1 de
Enero hasta ese día. 

Por ejemplo, el 20 de mayo de 2018 es el día 140 del año. La fecha
deberá ser solicitada al usuario: primero deberá ser introducido el día; luego el mes y, por
último, el año.

Para obtener el número correcto de días, deberá calcularse si el año introducido es bisiesto o
no. Para ello, será necesario definir la siguiente función:

~~~~
int es_bisiesto( int anyo);
~~~~

La función deberá devolver un 1 si el año introducido como parámetro es bisiesto y un 0 si no lo
es. Un año es bisiesto si es divisible por 4 (el módulo 4 del año es cero, por ejemplo: 2016,
2020, etc.) y no es divisible por 100 (los años 2100 o 2200 no son bisiestos), excepto si es
divisible por 400 (los años 2000 y 2400 sí son bisiestos, a pesar de ser divisibles por 100).
Una vez obtenida la fecha por parte del usuario, el programa deberá calcular el número del día
e imprimir el resultado por la pantalla.
