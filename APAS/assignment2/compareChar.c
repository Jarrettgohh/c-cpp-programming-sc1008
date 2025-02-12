#include <stdio.h>
#include <string.h>

void compareChar(char *str1, char *str2, char *str3);

int main()
{
 char str1[80], str2[80], str3[80];

 printf("Enter the first string: \n");
 scanf("%s", str1);
 printf("Enter the second string: \n");
 scanf("%s", str2);
 compareChar(str1, str2, str3);
 printf("compareChar(): %s\n", str3);
 return 0;
}

void compareChar(char *str1, char *str2, char *str3)
{
 do
 {
  int v = (int)*str1 > (int)*str2 ? (int)*str1 : (int)*str2;
  *str3++ = (char)v;

  *str1++;
  *str2++;

 } while (*str1 != 0x0 || *str2 != 0x0);
}