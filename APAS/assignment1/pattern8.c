#include <stdio.h>

int main()
{

    int height;

    printf("Enter the height: \n");
    scanf("%d", &height);

    printf("The pattern is: \n");
    for (int x = height; x > 0; x--)
    {

        int skip = height - x;

        for (int s = 0; s < skip; s++)
            printf(" ");

        for (int y = 0; y < x; y++)
            printf("*");

        printf("\n");
    }

    return 0;
}