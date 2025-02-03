#include <stdio.h>

void reverseAr1D(int ar[], int size);


int main()
{

 int ar[10];
 int size, i;

 printf("Enter array size: \n");
 scanf("%d", &size);
 printf("Enter %d data: \n", size);
 for (i=0; i <= size-1; i++)
 scanf("%d", &ar[i]);

 reverseAr1D(ar, size);
 printf("reverseAr1D(): ");

 if (size > 0) {

 for (i=0; i<size; i++)
 printf("%d ", ar[i]);
 }

 return 0;
}

// 0, 1, 2, 3, 4, 5 (6) -> 0,5 1,4 2,3 -> 5,3,1
// 0, 1, 2, 3, 4, 5, 6 (7) -> 0,6 1,5 2,4, 3 -> 6,4,2

void reverseAr1D(int ar[], int size)
{

int stopIndex = (size/2) - 1;

 for (int i = 0; i <= stopIndex; i++) {
     int start = i;
     int stop = start + ((size-1)-(i*2));

     printf("start: %d\n", start);
     printf("stop: %d\n", stop);

     int store = ar[start];
     ar[start] = ar[stop];
     ar[stop] = store;
 }
}
