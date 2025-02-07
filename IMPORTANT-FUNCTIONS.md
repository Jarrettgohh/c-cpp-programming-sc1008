> <string.>

1. ```python
   strcat(char *dest, char *src)
   ```
   - concat strings
   - returns the concat-ed string (`char` type pointer to the dest string)
   
2. ```python
	strcpy(char *dest, char *src)
	``` 
- copy strings 
- returns `char` type pointer to dest string

3. ```python
	strcmp(char *str1, char *str2) 
	```
- compare string 
- returns an `int` value which is positive if the first string is greater, negative if the second string is greater and 0 if the two strings are equal

4. strstr(char *str, char *subtr) 
- check if substring exists in main string
- returns   a `char`  type pointer to the position in the string where the substring was found or NULL if the substring was not found.

> <ctype.h>

1. isdigit()
2. isalpha() - is alphanumeric

> <stdlib.h>
1. atoi(char *str) 
- The `atoi()` function reads a representation of a whole number from a string and returns its value
- returns an `int` 

2. strtol() - String to Long
3. malloc()
4. realloc()

> <stdio.h>
1. sprintf() - to format strings (convert other data types to string)
