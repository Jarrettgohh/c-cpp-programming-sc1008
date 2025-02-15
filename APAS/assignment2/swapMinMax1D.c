#include <stdio.h>

void swapMinMax1D(int ar[], int size);

int main()
{
    int ar[50], i, size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", ar + i);
    swapMinMax1D(ar, size);
    printf("swapMinMax1D(): ");
    for (i = 0; i < size; i++)
        printf("%d ", *(ar + i));
    return 0;
}

void swapMinMax1D(int ar[], int size)
{
    int smallest = 0, largest = 0, smallest_i, largest_i;

    for (int j = 0; j < size; j++)
    {
        int v = ar[j];

        if (j == 0)
        {
            smallest = v;
            largest = v;
        }

        if (v <= smallest)
        {
            smallest = v;
            smallest_i = j;
        }
        else if (v >= largest)
        {
            largest = v;
            largest_i = j;
        }
    }

    if (smallest != largest)
    {
        ar[smallest_i] = largest;
        ar[largest_i] = smallest;
    }
}