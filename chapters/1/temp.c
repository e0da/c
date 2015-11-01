#include <stdio.h>

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limite of table */
#define STEP  20  /* step size */

int main()
{
    float celcius, fahrenheit;

    printf("Fahrenheit | Celcius\n");
    printf("--------------------\n");
    for (fahrenheit = UPPER; fahrenheit >= LOWER; fahrenheit -= STEP) {
        celcius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%10.f | %6.1f\n", fahrenheit, celcius);
    }
    printf("--------------------\n");

    printf("\n");

    printf("Celcius | Fahrenheit\n");
    printf("--------------------\n");
    for (celcius = UPPER; celcius >= LOWER; celcius -= STEP) {
        fahrenheit = (celcius / (5.0/9.0)) + 32.0;
        printf("%7.f | %10.1f\n", celcius, fahrenheit);
    }
    printf("--------------------\n");

    return 0;
}
