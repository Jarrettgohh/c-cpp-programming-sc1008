#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char *sweepSpace1(char *str);
char *sweepSpace2(char *str);

int main()
{
    char str[80], str2[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    strcpy(str2, str);
    // printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str2));

    return 0;
}

char *sweepSpace1(char *str)
{

    char *sweep = malloc(sizeof(char));
    int i = 0; // str
    int x = 0; // sweep

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
    char *sweepPtr = sweep;

    if (!sweep)
    {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    // *sweep = *str;
    // sweep++;
    // *sweep = 0x0;
    // // *(sweep + 1) = 0x0;
    // printf("%c\n", sweep);

    // return "hey";

    while (*str != 0x0)
    {

        while (*str == ' ')
        {
            str++;
        }

        // char *temp = realloc(sweepPtr, strlen(sweep) + sizeof(char));

        // if (temp)
        // {
        //     sweep = temp; // Assign only if successful
        // }
        // else
        // {
        //     printf("Reallocation failed!\n");
        //     free(sweep); // Free old memory to prevent leaks

        //     return NULL;
        // }

        *sweep++ = *str++;
    }

    // include null-terminator
    *sweep = 0x0;

    // char *v = str;

    // do
    // {
    //  while (*v == ' ')
    //  {

    //   // post or pre increment does not matter (?)
    //   ++v;
    //  }
    // } while (*str++ = *v++);

    printf("%s\n", sweepPtr); // PRINT sweep will not work since the pointer is not pointing to the original position
    return sweepPtr;
}
