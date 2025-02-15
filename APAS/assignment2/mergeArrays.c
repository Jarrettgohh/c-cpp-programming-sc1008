#include <stdio.h>

#define M 80

int mergeArrays(int a[M], int b[M], int c[M], int n1, int n2);

int main()
{
    int a[M], b[M], c[M], i, k = 0, n1, n2;
    printf("Enter the size of array a: \n");
    scanf("%d", &n1);
    printf("Enter the size of array b: \n");
    scanf("%d", &n2);
    printf("Enter array a[%d]: \n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter array b[%d]: \n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    k = mergeArrays(a, b, c, n1, n2);
    printf("mergeArrays(): \n");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);
    return 0;
}

int mergeArrays(int a[M], int b[M], int c[M], int n1, int n2)
{

    int a_index = 0, b_index = 0, c_index = 0;
    while (c_index < (n1 + n2))
    {

        if (a_index > (n1 - 1))
        {

            c[c_index] = b[b_index];
            b_index++;
            c_index++;
            continue;
        }

        else if (b_index > (n2 - 1))
        {
            c[c_index] = a[a_index];
            a_index++;
            c_index++;
            continue;
        }

        int a_val = a[a_index];
        int b_val = b[b_index];

        if (a_val < b_val)
        {
            c[c_index] = a_val;
            a_index++;
        }
        else
        {
            c[c_index] = b_val;
            b_index++;
        }

        c_index++;
    }
}