#include <stdio.h>

#define MAX_LINE_LENGTH 500

int readline(char *line); /* read a line in from stdin including \n and return the length including \n and \0 */
void rstrip(char *line); /* strip the trialing spaces and tabs from line, leaving \n */
int len(char *line); /* return the length of str including \n and \0 */
int space_or_null(char c); /* return 0 if c is white space or null character */

int main()
{
    int length;
    char line[MAX_LINE_LENGTH];

    length = -1; /* initialize to impossible value */

    while (readline(line) != 0) {
        rstrip(line);
        if (len(line) > 1) /* line is not blank */
            printf("%s", line);

    }
    return 0;
}

int readline(char *line)
{
    int c, length;
    for (length = 0; ((c = getchar()) != EOF); ++length) {
        line[length] = c;
        if (c == '\n') {
            line[++length] = '\0';
            break;
        }
    }
    return length;
}

void rstrip(char *line)
{
    /* Start at the end of the string and consider each chacter. If the
     * character is a white space or null character, replace it with a null
     * character. When we encounter our first non-space character (the last
     * character of the string) add a newline and a null character and quit */
    for (int i = (len(line)); i >= 0; --i)
        if (space_or_null(line[i]))
            line[i] = '\0';
        else {
            line[++i] = '\n';
            line[++i] = '\0';
            break;
        }
}

int len(char *line)
{
    int i, c;
    /* Count each character until we encounter the null character, then return
     * the total including the null character. */
    for (i = 0; (c = line[i]) != '\0'; ++i)
        ;
    return i;
}

int space_or_null(char c)
{
    return (c == ' ' || c == '\t' || c == '\n' || c == '\0');
}
