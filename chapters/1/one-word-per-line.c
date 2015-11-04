#include <stdio.h>

#define IN  0 /* in a word */
#define OUT 1 /* outside a word */

int main()
{
    int c, state;

    state = 0;

    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN)
                putchar('\n');
            state = OUT;
        }
        else {
            state = IN;
            putchar(c);
        }

}
