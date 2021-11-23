#include <stdio.h>

int isPalindrome(int n)
{
    int m = n;
    int rev = 0;
    while (n > 0)
    {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }

    if (rev == m)
        return 1;
    else
        return 0;
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a Palindrome Number\n", n);
    else
        printf("%d is NOT a Palindrome Number\n", n);
}