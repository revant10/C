#include <stdio.h>

void main()
{
    char name[25];
    int age;
    float weight;

    // Getting string input
    printf("Enter your Name: ");
    scanf("%[^\n]%*c", name);
    // Getting integer input
    printf("Your Age: ");
    scanf("%d", &age);
    // Getting float input
    printf("Enter your Weight: ");
    scanf("%f", &weight);

    printf("\nYour Details:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Weight: %.2f\n", weight);
}