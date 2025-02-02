#include <stdio.h>
#include <string.h>

#define SIZE 10
#define ARR_SLOT_SIZE 4

void display2D(int ar[][SIZE], int rowSize, int colSize)
{
 for (int c = 0; c < colSize; c++)
 {
  for (int r = 0; r < rowSize; r++)
  {
   int v = ar[c][r];

   char buf[4];
   sprintf(buf, "%d", v);
   int v_len = strlen(buf);

   printf("%d", v);

   // insert padding within each arr slot for proper formatting
   for (int y = 0; y < ARR_SLOT_SIZE - v_len; y++)
    putchar(' ');
  }
  putchar('\n');
 }

 putchar('\n');
}

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize)
{
 printf("[BEFORE]\n");
 display2D(ar, rowSize, colSize);

 // assume colSize = rowSize = 4
 // range: 0 - 2
 for (int c = 0; c <= (colSize - 2); c++)
 {

  int r = c + 1;
  int sum = 0;

  // range: 2 -> 1 -> 0
  while (r < colSize)
  {

   sum += ar[r][c];
   ar[r][c] = 0;
   r++;
  }

  ar[c][c] = (ar[c][c] + sum);
 }

 printf("[AFTER]\n");
 display2D(ar, rowSize, colSize);
}

int main()
{
 // int ar[][SIZE] = {{4, 3, 8, 6}, {9, 0, 6, 5}, {5, 1, 2, 4}, {9, 8, 3, 7}};
 int ar[][SIZE] = {{4, 3, 8, 6, 5}, {9, 0, 6, 5, 10}, {5, 1, 2, 4, 22}, {9, 8, 3, 7, 88}, {1, 22, 88, 44, 1}};

 reduceMatrix2D(ar, 5, 5);
}