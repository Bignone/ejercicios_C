#include <stdio.h>
#include <stdlib.h>
#include <bisiestolib.h>

void askDate(int *in_date)  {
    printf("Insert the date as : \n");

    printf("Insert day: ");
    scanf("%d", &in_date[0]);
    printf("Insert month: ");
    scanf("%d", &in_date[0]);
    printf("Insert year: ");
    scanf("%d", &in_date[0]);
    
    for (int i = 0; i < 5; i++)  {
        printf("Number %d: ", i);
        scanf("%d", &in_numbers[i]);

    }
    printf("Inserted numbers: [%d, %d, %d, %d, %d]\n", in_numbers[0], in_numbers[1], in_numbers[2], in_numbers[3], in_numbers[4]);

}

int main()  {
    /* Selecciona el numero mayor de 5 introducidos */
    int in_date[3];
    int max_number;

    /* ask numbers (pass in_number pointer to be filled by function)*/
    askNumbers(in_numbers);

    /* calculate max (calculate the max value) */
    max_number = maxNumberOf(in_numbers);

    exit(0);
}
