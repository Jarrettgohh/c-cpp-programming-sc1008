#include <stdio.h>
#include <math.h>

void calc(int a1, int b1, int c1, int a2, int b2, int c2)
{
    int denominator = a1 * b2 - a2 * b1;

    if (denominator == 0)
    {
        printf("Unable to compute because the denominator is zero!");
    }

    int xNumerator = b2 * c1 - b1 * c2;
    int yNumerator = a1 * c2 - a2 * c1;

    float x = xNumerator / denominator;
    float y = yNumerator / denominator;

    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
}

int main()
{

    printf("Enter the values for a1, b1, c1, a2, b2, c2:\n");

    int value, a1, b1, c1, a2, b2, c2;
    // char *ref[] = {&a1, "b1", "c1", "a2", "b2", "c2"};
    int *ref[] = {&a1, &b1, &c1, &a2, &b2, &c2};

    int count = 0;
    int r;

    while ((r = scanf("%d", &value)) == 1 && r != EOF)
    {

        if (value == -1)
            break;

        *(ref[count]) = value;
        count++;
    }

    printf("a1 = %d\n", a1);
    printf("b1 = %d\n", b1);
    printf("c1 = %d\n", c1);
    printf("a2 = %d\n", a2);
    printf("b2 = %d\n", b2);
    printf("c2 = %d\n", c2);

    calc(a1, b1, c1, a2, b2, c2);
    return 0;
}
