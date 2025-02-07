#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *sweepSpace1(char *str);
char *sweepSpace2(char *str);

int main()
{
 char str[80], str2[80], *p;

 printf("Enter the string: \n");
 fgets(str, 80, stdin);
 if (p = strchr(str, '\n'))
  *p = '\0';
 strcpy(str2, str);
 // printf("sweepSpace1(): %s\n", sweepSpace1(str));
 printf("sweepSpace2(): %s\n", sweepSpace2(str2));

 return 0;
}

char *sweepSpace1(char *str)
{
 bool run = true;
 int index = 0;

 while (run)
 {
  char v = str[index];

  // check for empty space
  if (v == ' ')
  {
   // str[index] = '';
  }
 }
}
char *sweepSpace2(char *str)
{

 char *v = str;

 do
 {
  while (*v == ' ')
  {

   // post or pre increment does not matter (?)
   ++v;
  }
 } while (*str++ = *v++);

 printf("%s\n", str);
 return str;
}