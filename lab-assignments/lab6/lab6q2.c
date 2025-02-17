#include <stdio.h>
#include <string.h>

int rDigitPos1(int num, int digit);
void rDigitPos2(int num, int digit, int *pos);

int main()
{
    int number, digit, result = 0;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("Enter the digit: \n");
    scanf("%d", &digit);
    printf("rDigitPos1(): %d\n", rDigitPos1(number, digit));
    rDigitPos2(number, digit, &result);
    printf("rDigitPos2(): %d\n", result);
    return 0;
}

int rDigitPos1(int num, int digit)
{
    if (num == 0)
        // value 0 will propagate all the way back to the first calling function
        return 0;

    if (num % 10 == digit)
        return 1;

    int pos = rDigitPos1(num / 10, digit);

    if (pos == 0)
        // propagated 0
        return 0;
    else
        return pos + 1;
}

// int rDigitPos1(int num, int digit)
// {
//     if (num == 0)
//         return 0;

//     else if (num % 10 == digit)
//         return 1;

//     int sum = 0;

//     sum += (1 + rDigitPos1(num / 10, digit));

//     char num_str[80];
//     sprintf(num_str, "%d", sum);

//     if (strlen(num_str) == sum)
//         return 0;
//     else
//         return sum;
// }

void rDigitPos2(int num, int digit, int *pos)
{
    if (num == 0)
    {
        *pos = 0;
        return;
    }
    else
    {
        (*pos)++;

        if (num % 10 == digit)
            return;
        else
            rDigitPos2(num / 10, digit, pos);
    }
}
