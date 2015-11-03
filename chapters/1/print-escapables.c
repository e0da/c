#include <stdio.h>

/* Print escapable characters for use as input to escape. It's hard to print
 * backspaces otherwise. :) */
int main()
{
    printf("This is \t a thing \t that has a bunch of \b dumb characters \n\
            in it that need to be \t\t escaped! \\ \\ \\ \\\n");
}
