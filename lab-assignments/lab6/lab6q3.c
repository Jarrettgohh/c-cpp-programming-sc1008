#include <stdio.h>

int rSquare1(int num);
void rSquare2(int num, int *result);

int main()
{
 int number, result=0;
 printf("Enter the number: \n");
 scanf("%d", &number);
 printf("rSquare1(): %d\n", rSquare1(number));
 rSquare2(number, &result);
 printf("rSquare2(): %d\n", result);
 return 0;
}

int sum = 0;
int c1 = 0;

int rSquare1(int num)
{
 if (num==c1){
     return sum;
 }
 else 
 {
     sum+=(c1*2+1);
     c1++;
     rSquare1(num);
 }
}


int c2 = 0;

void rSquare2(int num, int *result)
{
  if (num==c2){
     return;
 }
 else 
 {
     (*result)+=(c2*2+1);
     c2++;
     rSquare2(num, result);
 }
} 
