#include <stdio.h>

#define MAX 1024 /* maximum supported word length */

int main()
{
    int c;
    int totals[MAX] = { 0 };

    while ((c = getchar()) != EOF)
        ++(totals[c]);

    for (c = 0; c < MAX; c++) {
        if (totals[c] > 0) {
            if (c == '\n')
                printf("\\n: ");
            else if (c == '\t')
                printf("\\t: ");
            else
                printf("%2c: ", c);
            for (int i = 0; i < totals[c]; i++)
                putchar('|');
            putchar('\n');
        }
    }
}
