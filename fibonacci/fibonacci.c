#include <stdio.h>
#include <stdlib.h>

int main()  {
    /* Selecciona el numero mayor de 5 introducidos */
    int nterms = 50;
    int count = 0;
    int n0 = 0;
    int n1 = 1;
    int nth;

    printf("Fibonacci sequence upto %d\n", nterms);
    while (count < nterms) {
        printf("%d ", n0);

        nth = n0 + n1;
        n0 = n1;
        n1 = nth;

        count += 1;

    }

    exit(0);
}
