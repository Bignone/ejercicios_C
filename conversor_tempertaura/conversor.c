#include <stdio.h>
#include <stdlib.h>


float gradosCelsius2gradosKelvin(float gradosCelsius)  {
    float gradosFarenhait;
    gradosFarenhait = gradosCelsius * 1.8 + 32;
    return gradosFarenhait * 1.8 + 32;
}

float gradosCelsius2gradosFarenhait(float gradosCelsius)  {
    float gradosFarenhait;
    gradosFarenhait = gradosCelsius + 273.15;
    return gradosFarenhait;
}

int main()  {
    /* Convierte Celsius a Kelvin y Farenhait */
    float gradosCelsius, gradosKelvin, gradosFarenhait;
    printf("Introducde la temperatura en grados Celsius\n");
    printf("Grados Celsius: ");
    scanf("%f", &gradosCelsius);

    gradosFarenhait = gradosCelsius2gradosFarenhait(gradosCelsius);
    printf("La temperatura en grados Farenhait es: %f\n", gradosFarenhait);

    gradosKelvin = gradosCelsius2gradosKelvin(gradosCelsius);;
    printf("La temperatura en grados Kelvin es: %f\n", gradosKelvin);

    exit(0);
}
