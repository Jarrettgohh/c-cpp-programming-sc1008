#include <stdio.h>
#include <string.h>

#define SIZE 4
#define ROW 4
#define COL 3
#define ARR_SLOT_SIZE 4

void add1(int ar[], int size);

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
int main()
{
  int array[3][4];
  int h, k;

  for (h = 0; h < 3; h++)
  {
    for (k = 0; k < 4; k++)
      scanf("%d", &array[h][k]);
  }

  printf("[BEFORE]\n");
  display2D(array, ROW, COL);

  for (h = 0; h < 3; h++) /* line a */
  {
    // add1(array[h], 4); // adds  1 to each element in the arr
    add1(array[0], 3 * 4); // adds 3 to each element in the arr
  }

  // for (h = 0; h < 3; h++)
  // {
  //   for (k = 0; k < 4; k++)
  //   {

  //     printf("% 10d", array[h][k]);
  //   }
  //   putchar('\n');
  // }

  printf("[AFTER]\n");
  display2D(array, ROW, COL);

  return 0;
}

void add1(int ar[], int size)
{
  int k;

  for (k = 0; k < size; k++)
    ar[k]++;
}