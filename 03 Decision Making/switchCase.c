#include <stdio.h>
#include <ctype.h>

void main()
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    grade = toupper(grade);
    printf("Message: ");

    // the break statement is neccessary to get the control out of the switch block
    // if any case matches or else default block will also get executed even if the
    // case matches.
    switch (grade)
    {
    case 'A':
        printf("Excellent\n");
        break;

    case 'B':
        printf("Very Good\n");
        break;

    case 'C':
        printf("Good\n");
        break;

    case 'D':
        printf("Satisfactory\n");
        break;

    case 'F':
        printf("Better Luck next time..\n");
        break;
    
    // if none of the above cases match the default block will be executed.
    default:
        printf("Invalid Input\n");
        break;
    }
}