#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverseDigits(int num);
void append(int, int *);

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("reverseDigits(): %d\n", reverseDigits(num));

    //     int *int_arr = (int *)malloc(sizeof(int));
    //     printf("sizeof int__arr %lu\n", sizeof(*int_arr));

    //     append(5, int_arr);

    //     // *int_arr = 5;

    //     for (int i = 0; i < 6; i++)
    //     {
    //         printf("%d\n", int_arr[i]);
    //     }

    return 0;
}

// void append(int val, int *arr)
// {
//     int oldSize = sizeof(arr);

//     // arr = realloc(arr, oldSize + sizeof(int));
//     printf("oldSIze: %d\n", oldSize);
//     printf("sizeof int %lu\n", sizeof(int));

//     *(arr + 0) = val;
// }

int reverseDigits(int num)
{

    char *reverse = malloc(sizeof(char));

    // the middle condition in the for statement can be left empty, but the value 10 is used instead to prevent a potential infinite loop
    // in this case, the value 10 is enough to satisfy the max length of int (2^32 ~= 2,147,483,647)
    for (int i = 1; i < 10; i++)
    {
        int lastDigit = num % 10;

        // INT division always return a value without the decimal place
        num /= 10;

        char reverseStr[sizeof(char) + 1] = "";

        sprintf(reverseStr, "%d", lastDigit);

        reverse = realloc(reverse, (i * sizeof(char)) + sizeof(char));
        strcat(reverse, reverseStr);

        if (num == 0)
            break;
    }

    return atoi(reverse);
}