#include <stdio.h>

int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);

int main()
{
    int x, y, result = -1;

    printf("Enter 2 numbers: \n");
    scanf("%d %d", &x, &y);

    printf("gcd1(): %d\n", gcd1(x, y));

    gcd2(x, y, &result);
    printf("gcd2(): %d\n", result);

    return 0;
}
int gcd1(int num1, int num2)
{
    int start = num1 > num2 ? num2 : num1;

    for (int i = start; i > 0; i--)
    {

        float mod1 = num1 % i;
        float mod2 = num2 % i;

        if (mod1 == mod2 && mod2 == 0)
        {
            return i;
        }
    }
}
void gcd2(int num1, int num2, int *result)
{
    *result = gcd1(num1, num2);
}