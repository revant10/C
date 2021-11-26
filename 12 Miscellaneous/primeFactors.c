#include <stdio.h>
#include <math.h>

// Declaring the function
void getPrimeFactors(int n);


// Main Function
void main()
{
    int n;

    printf("Enter a integer: ");
    scanf("%d", &n);

    // Calling the function
    getPrimeFactors(n);
}


// Defining the function
void getPrimeFactors(int n)
{
    int i = 2;
    while (n > 1)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            n = n / i;
        }
        else
            i++;
    }
}