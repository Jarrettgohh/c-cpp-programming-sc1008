> <string.>

1. ```c
   strcat(char *dest, char *src)
   ```
   - concat strings
   - returns the concat-ed string (`char` type pointer to the dest string)
2. ```c
   strcpy(char *dest, char *src)
   ```

- copy strings
- returns `char` type pointer to dest string

3. ```c
   strcmp(char *str1, char *str2)
   ```

- compare string
- returns an `int` value which is positive if the first string is greater, negative if the second string is greater and 0 if the two strings are equal

4. ```c
   strstr(char *str, char *subtr)
   ```

- check if substring exists in main string
- returns a `char` type pointer to the position in the string where the substring was found or NULL if the substring was not found.

> <ctype.h>

1. ```c
   isdigit()
   ```
2. ```c
   isalpha()
   ```

- is alphanumeric

> <stdlib.h>

1. ```c
   atoi(char *str)
   ```

- The `atoi()` function reads a representation of a whole number from a string and returns its value
- returns an `int`

2. ```c
   strtol()
   ```

- String to Long

3. ```c
   malloc()
   ```

4. ```c
   realloc()
   ```

> <stdio.h>

1. ```c
   sprintf()
   ```

- to format strings (convert other data types to string)

2. ```c
   fgets(char * destination, int size, FILE * fptr)
   ```
- Eg.
```c
char dummy[80];

scanf(...);

fgets(dummy, 80, stdin); // to clear the buffer before next scanf or reading

scanf(...);
```

   
