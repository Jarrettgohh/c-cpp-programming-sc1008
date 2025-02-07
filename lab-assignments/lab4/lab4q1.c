#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <stdbool.h>

char *sweepSpace1(char *str);
char *sweepSpace2(char *str);
void remove_spaces(char *str);

int main()
{
    char str[80], str2[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';

    strcpy(str2, str);
    // printf("sweepSpace1(): %s\n", sweepSpace1(str));
    // printf("sweepSpace2(): %s\n", sweepSpace2(str2));

    remove_spaces(str2);
    printf("%s\n", str2);

    return 0;
}

char *sweepSpace1(char *str)
{

    char *sweep = malloc(sizeof(char));
    int i = 0; // str
    int x = 0; // sweep

    // runs as long as null-terminator not encountered (NOT end of string)
    while (str[i] != 0x0)
    {

        while (str[i] == ' ')
        {
            i++;
        }

        sweep = realloc(sweep, sizeof(sweep) + sizeof(char));
        sweep[x++] = str[i++];
    }

    // include null-terminator
    sweep[x] = 0x0;

    return sweep;
}

char *sweepSpace2(char *str)
{

    char *sweep = malloc(2 * sizeof(char));
    char *sweepPtr = sweep; // to keep track of original pointer position

    if (!sweep)
    {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    // runs as long as null-terminator not encountered (NOT end of string)
    while (*str != 0x0)
    {

        while (*str == ' ')
        {
            str++;
        }

        *sweep++ = *str++;
    }

    // include null-terminator
    *sweep = 0x0;

    return sweepPtr;
}

void remove_spaces(char *s)
{
    char *d = s;
    do
    {
        while (*d == ' ')
        {
            ++d;
        }
    } while (*s++ = *d++);
}