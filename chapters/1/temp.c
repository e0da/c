#include <stdio.h>

int main()
{
    int lower, upper, step;
    float celcius, fahrenheit;

    upper = 100;
    lower = -upper;
    step = 20;

    printf("Fahrenheit | Celcius\n");
    printf("--------------------\n");
    for (fahrenheit = lower; fahrenheit <= upper; fahrenheit += step) {
        celcius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%10.f | %6.1f\n", fahrenheit, celcius);
    }
    printf("--------------------\n");

    printf("\n");

    printf("Celcius | Fahrenheit\n");
    printf("--------------------\n");
    for (celcius = lower; celcius <= upper; celcius += step) {
        fahrenheit = (celcius / (5.0/9.0)) + 32.0;
        printf("%7.f | %10.1f\n", celcius, fahrenheit);
    }
    printf("--------------------\n");

    return 0;
}
