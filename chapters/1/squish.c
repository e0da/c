#include <stdio.h>

#define IN  0 /* in a string of spaces */
#define OUT 1 /* outside a string of spaces */

/* Exercise 1-9: Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank. p20 */
int main()
{
    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF)
        if (c != ' ') {
            putchar(c);
            state = OUT;
        }
        else if (state == OUT) {
            putchar(c);
            state = IN;
        }
}
