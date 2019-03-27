#include <stdio.h>
#include <stdlib.h>

#include "bisiest/bisiest.h"

/* This is included in  "bisiest/bisiest.h"
int is_bisiest_year(int year) {
    int is_b = 0;
    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ){
        is_b = 1;
    }
    return is_b;

}
*/
void askDate(int *in_date)  {
    printf("Insert the date \n");

    printf("Insert day: ");
    scanf("%d", &in_date[0]);
    printf("Insert month: ");
    scanf("%d", &in_date[1]);
    printf("Insert year: ");
    scanf("%d", &in_date[2]);    

    printf("Inserted date: %d/%d/%d\n", in_date[0], in_date[1], in_date[2]);

}

int calculate_julian_day(int *in_date) {
    printf("Calculatting julian day...");
    int days_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};
    if (is_bisiest_year(in_date[2])) {
        days_month[1]++;
    }
    int julian_day = in_date[0];

    for (int i = 0; i < in_date[1]; i++) {
        julian_day += days_month[i];
    }

    printf("The julian day is: %d\n", julian_day);
    return julian_day;
    
}

int main()  {
    /* Selecciona el numero mayor de 5 introducidos */
    int in_date[3];
    int julian_day;

    /* ask numbers (pass in_number pointer to be filled by function)*/
    askDate(in_date);

    /* calculate max (calculate the max value) */
    julian_day = calculate_julian_day(in_date);

    exit(0);
}
