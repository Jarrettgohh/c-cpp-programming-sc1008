/* 1. Write a C program that prints the ID and grade of each student in a class. The input
contains the student IDs and their marks. The range of the marks is from 0 to 100. The
relationships of the marks and grades are given below:
Grade Mark
A 100-75
B 74-65
C 64-55
D 54-45
F 44-0
Use the sentinel value –1 for student ID to indicate the end of user inputs.

(1) Test Case 1:
Enter Student ID:
11
Enter Mark:
56
Grade = C
Enter Student ID:
21
Enter Mark:
89
Grade = A
Enter Student ID:
31
Enter Mark:
34
Grade = F
Enter Student ID:
-1
*/

#include <stdio.h>

int main()
{

    int studentID;

    for (;;) // infinite loop
    {
        int mark;
        char grade;

        printf("Enter Student ID:\n");
        scanf("%d", &studentID);

        if (studentID == -1)
        {
            break;
        }

        do // continously ask for input until valid marks is given (<= 100)
        {

            printf("Enter Mark:\n");
            scanf("%d", &mark);

        } while (mark < 0 || mark > 100);

        if (mark <= 44)
        {
            grade = 'F';
        }
        else if (mark <= 54)
        {
            grade = 'D';
        }
        else if (mark <= 64)
        {
            grade = 'C';
        }
        else if (mark <= 74)
        {
            grade = 'B';
        }
        else if (mark <= 100)
        {
            grade = 'A';
        }

        // printf("student ID: %d\n", studentID);
        printf("Grade = %c\n", grade);
    }

    return 0;
}
