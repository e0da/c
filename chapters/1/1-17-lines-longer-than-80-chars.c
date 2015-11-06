#include <stdio.h>
#include <limits.h>

#define MINIMUM_PRINT_LENGTH 80  /* lines at least this long get printed */
#define MAX_LINE_LENGTH      500 /* the longest line length we support reading */

int my_getline(char* line);

int main()
{

    int length;
    char line[MAX_LINE_LENGTH];

    while ((length = my_getline(line)) != 0) {
        if (length >= MINIMUM_PRINT_LENGTH)
            puts(line);
    }
    return 0;
}

int my_getline(char* line)
{
    int c, length;
    for (length = 0; (c = getchar()) != EOF; ++length) {
        line[length] = c;
        if (c == '\n') {
            line[++length] = '\0';
            break;
        }
    }
    return length;
}
