#include <stdio.h>
#include <stdlib.h>

int main()  {
    /* Selecciona el numero mayor de 5 introducidos */
    int nterms = 50;
    int count = 0;
    int n0 = 0;
    int n1 = 1;
    int nth;

    while (count < nterms) {
        nth = n0 + n1;
        n0 = n1;
        n1 = nth;
        count += 1;
        printf(" %d ", count);

    }

    exit(0);
}
