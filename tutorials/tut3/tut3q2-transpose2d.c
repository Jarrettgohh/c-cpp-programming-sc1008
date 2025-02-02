#include <stdio.h>

#define SIZE 10

void display2D(int ar[][SIZE], int rowSize, int colSize)
{
 for (int c = 0; c < colSize; c++)
 {
  for (int r = 0; r < rowSize; r++)
  {
   int v = ar[c][r];
   printf("%d ", v);
  }
  putchar('\n');
 }

 putchar('\n');
}

void transpose2D(int ar[][SIZE], int rowSize, int colSize)
{

 printf("[BEFORE]\n");
 display2D(ar, rowSize, colSize);

 for (int c = 0; c < colSize; c++)
 {
  for (int r = (c + 1); r < rowSize; r++)
  {
   int prev = ar[c][r];
   ar[c][r] = ar[r][c];
   ar[r][c] = prev;
  }
 }

 printf("[AFTER]\n");
 display2D(ar, rowSize, colSize);
}

int main()
{

 int ar[][SIZE] = {{1, 2, 3, 4}, {5, 1, 2, 2}, {6, 3, 4, 4}, {7, 5, 6, 7}};
 // int ar[][SIZE] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 8, 9, 8}, {6, 8, 6, 8}};

 transpose2D(ar, 4, 4);
 return 0;
}