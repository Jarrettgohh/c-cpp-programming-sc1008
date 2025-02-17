#include <stdio.h>

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
        return -100;

    else if (num % 10 == digit)
        return 1;

    int sum = 0;

    sum += (1 + rDigitPos1(num / 10, digit));

    return sum;
}

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
