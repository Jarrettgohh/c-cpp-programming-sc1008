#include <stdio.h>
#include <string.h>

#define INIT_VALUE 999

int findSubstring(char *str, char *substr);

int main()
{
   char str[40], substr[40], *p;  
   int result = INIT_VALUE;      
   printf("Enter the string: \n");
   fgets(str, 80, stdin);
//    printf("char: %ch\n", str[7]);
   if (p=strchr(str,'\n')) *p = '\0';  
   printf("Enter the substring: \n");
   fgets(substr, 80, stdin);
//    printf("char: %ch\n", substr[7]);
   if (p=strchr(substr,'\n')) *p = '\0';  
   result = findSubstring(str, substr);
   if (result == 1)
      printf("findSubstring(): Is a substring\n");
   else if ( result == 0)
      printf("findSubstring(): Not a substring\n");   
   else         
      printf("findSubstring(): An error\n");    
   return 0;
}

int findSubstring(char *str, char *substr)   
{

    int curStrIndex = 0;

    do {
        if (curStrIndex != 0){
            if (*substr == str[curStrIndex+1]) {
                curStrIndex++;
            }
            else {
                curStrIndex = 0;
            }

            continue;
        }

        // iterate through str
        for (int i=0;;i++){
            char cur = str[i];

            if (*substr == cur) {
                curStrIndex = i;
                break;
                }
            
            if (cur == 0x0) break;
        }

    } while (*substr++ != 0x0);

    if (curStrIndex != 0) return 0;
    else return 1;

//    int curIndexStr = 0;

//        for (int i=0;;i++){
//            char cur = substr[i];

//    do {

//             if (cur == *str)
//             {

//                 if (curIndexStr == 0){
//                     curIndexStr = i;
//             }
//             else {
//                 if (cur == str[curIndexStr+1]){
//                     curIndexStr++;
//                 }
//                 else {
//                     curIndexStr = 0;
//                 }
//             }
//             } 


//    } while (*str++ != 0x0);

//         if (cur == 0x0) break;
//        }


//     if (curIndexStr != 0){
//            printf("substr\n");
//        }
}
