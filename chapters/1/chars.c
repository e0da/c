#include <stdio.h>

int main()
{
    int c;

    puts("Copy all input chars and verify that getchar() != EOF is 01 or 1");
    while ((c = getchar()) != EOF) {
        putchar(c);

        if ((c != EOF) != 1)
            puts("That's not right.");
        else if ((c != EOF) == 0)
            puts("This is the end, my friend.");
    }


    puts("Verify getchar() != EOF is 0");
}
