#include <stdio.h>

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limite of table */
#define STEP  20  /* step size */

/* Formulae to convert Fahrenheit to Celcius and vice versa */
#define F_TO_C(F) (5.0/9.0) * (F - 32.0)
#define C_TO_F(C) ((C / (5.0/9.0)) + 32.0)

int main()
{
    float degrees;

    printf("Fahrenheit | Celcius\n");
    printf("--------------------\n");
    for (degrees = UPPER; degrees >= LOWER; degrees -= STEP)
        printf("%10.f | %6.1f\n", degrees, F_TO_C(degrees));
    printf("--------------------\n");

    printf("\n");

    printf("Celcius | Fahrenheit\n");
    printf("--------------------\n");
    for (degrees = UPPER; degrees >= LOWER; degrees -= STEP)
        printf("%10.f | %6.1f\n", degrees, C_TO_F(degrees));
    printf("--------------------\n");

    return 0;
}
