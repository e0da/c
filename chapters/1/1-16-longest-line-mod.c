#include <stdio.h>

#define MAX_LINE_LENGTH 1024
#define LONGEST_LINE_MSG "Longest line is %d characters (including newline character):\n%s"
#define NO_LINES_MSG "There were no lines, yoh.\n"

int readline(char line[]);
void copy(char from[], char to[]);

int main()
{
    char line[MAX_LINE_LENGTH], longest_line[MAX_LINE_LENGTH];
    int length, max_length;

    max_length = 0;

    while ((length = readline(line)) > 0) {
        if (length > max_length) {
            max_length = length;
            copy(line, longest_line);
        }
    }
    if (max_length > 0) {
        printf(LONGEST_LINE_MSG, max_length, longest_line);
    }
    else {
        printf(NO_LINES_MSG);
    }
    return 0;
}

int readline(char line[])
{
    int i, c;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i <= MAX_LINE_LENGTH)
            line[i] = c;
    if (c == '\n')
        line[++i] = '\0';
    line[i] = '\0';
    return i;
}

void copy(char from[], char to[])
{
    int i;
    for (i = 0; (to[i] = from[i]) != '\0'; ++i)
        ;
}
