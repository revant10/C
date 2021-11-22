/*
Armstrong number is a number that is equal to the sum of cubes of its digits. 
For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
*/

#include <stdio.h>

int isArmstrong(int n)
{
    int sum = 0;
    int m = n;
    int r;
    while (n > 0)
    {
        r = n % 10;
        sum += r*r*r;
        n = n / 10;
    }

    if (sum == m)
        return 1;
    else
        return 0;

}

void main()
{
    int n;
    printf("Enter a three digit number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is a Armstrong Number.\n", n);
    else
        printf("%d is NOT a Armstrong Number.\n", n);
}