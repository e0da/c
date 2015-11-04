#include <stdio.h>

#define IN  0  /* inside a word */
#define OUT 2  /* outside a word */
#define MAX 32 /* maximum supported word length */

int space(int c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int main()
{
    int c, state, length;
    int lengths[MAX] = { 0 };

    length = 0;
    state = OUT;

    while ((c = getchar()) != EOF)
        if (space(c)) {
            if (state == IN)
                ++(lengths[length]);
            state = OUT;
            length = 0;
        }
        else {
            state = IN;
            ++length;
        }

    for (int i = 0; i < MAX; i++) {
        printf("%3d: ", i);
        for (int j = 0; j < lengths[i]; j++)
            putchar('|');
        putchar('\n');
    }
}
