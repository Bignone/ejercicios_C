#include <stdio.h>
#include <stdlib.h>

void calculateIntervals(int elements, int intervals, int *interval_limits) {
    int chip = elements / intervals;
    int acumulate = 0;
    interval_limits[0] = 0;
    
    printf("Calculating intervals\n");
    int i = 1;
    while (acumulate < elements) {
        int end_interval = acumulate + chip;
        interval_limits[i] = end_interval;
        acumulate += chip;

        if (acumulate + chip > elements) {
            chip = elements - acumulate;
        }
        printf("%d) From %d to %d\n", i, interval_limits[i-1], interval_limits[i]);
        i ++;
    }
}

int main()  {
    /* Selecciona el numero mayor de 5 introducidos */
    int elements, intervals;

    printf("Insert parameters : \n");
    printf("Insert elements number: ");
    scanf("%d", &elements);
    printf("Insert intervals number: ");
    scanf("%d", &intervals);
    printf("Inserted parameters - elements: %d; intervals:%d\n", elements, intervals);

    int interval_limits[intervals+1];

    calculateIntervals(elements, intervals, interval_limits);

    exit(0);
}
