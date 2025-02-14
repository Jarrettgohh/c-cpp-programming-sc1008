#include <stdio.h>

#define M 10

void matShifting(int a[M][M], int b[M][M], int n);

int main()
{
    int a[M][M], b[M][M];
    int n, i, j;

    printf("Enter array (nxn) size (n<=10): \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter row %d: \n", i);
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    matShifting(a, b, n);
    printf("Array b: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    return 0;
}

void matShifting(int a[M][M], int b[M][M], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < n; x++)
        {

            int toInsert = 0;

            if (x == (n - 1))
            {
                toInsert = 0;
            }
            else
            {
                toInsert = x + 1;
            }

            b[i][toInsert] = a[i][x];
        }
    }
}