#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void histogram()
{
}

int main()
{
 srand(time(0));
 int ran = rand();

 printf("%d\n", ran);
 printf("%d\n", ran % 100);
 return 0;
}