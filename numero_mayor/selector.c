#include <stdio.h>
#include <stdlib.h>

void askNumbers(int *in_numbers)  {
    printf("Insert 5 numbers: \n");
    
    for (int i = 0; i < 5; i++)  {
        printf("Number %d: ", i);
        scanf("%d", &in_numbers[i]);

    }
    printf("Inserted numbers: [%d, %d, %d, %d, %d]\n", in_numbers[0], in_numbers[1], in_numbers[2], in_numbers[3], in_numbers[4]);

}

int maxNumberOf(int int_array[]) {
    int max_number = int_array[0];

    for (int i = 0; i < 5; i++) {
        if(int_array[i] > max_number) {
            max_number = int_array[i];
        }
    }

    printf("Max number: %d\n", max_number);
    return max_number;
}

int main()  {
    /* Selecciona el numero mayor de 5 introducidos */
    int in_numbers[5];
    int max_number;

    /* ask numbers (pass in_number pointer to be filled by function)*/
    askNumbers(in_numbers);

    /* calculate max (calculate the max value) */
    max_number = maxNumberOf(in_numbers);

    exit(0);
}
