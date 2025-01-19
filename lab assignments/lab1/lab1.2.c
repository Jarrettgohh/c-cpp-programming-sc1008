/*
Write a C program that reads in several lines of non-negative integer numbers,
computes the average for each line and prints out the average. The value –1 in each line
of user input is used to indicate the end of input for that line.
A sample program template is given below.

Sample input and output sessions are given below:
(1) Test Case 1:
Enter number of lines:
1
Enter line 1 (end with -1):
1 2 3 4 -1
Average = 2.50
*/

#include <stdio.h>
#include <stdlib.h>

// clear stdin buffer to prevent interferences with subsequent getchar() calls
void clear_input_buffer()
{
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        // Keep reading and discarding characters until newline or EOF
    }
}

int main()
{

    for (;;)
    {

        int numLine;

        printf("Enter number of lines:\n");
        scanf("%d", &numLine);

        for (int i = 0; i < numLine; i++)
        {

            printf("Enter Line %d (end with -1):\n", i + 1);

            int input;
            int total = 0, count = 0;
            float avg;

            while (scanf("%d", &input) == 1)
            {

                if (input == -1)
                    break;

                total += input;
                count += 1;
            }

            clear_input_buffer();

            avg = (float)total / count;

            printf("Average = %.2f\n", avg);
        }

        printf("\n");
    }

    return 0;
}