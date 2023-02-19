//C program to check whether a number is palindrome(means same number after reversal) or not
#include <stdio.h>

int main()
{
    int n, num, rev=0;
    printf("Enter a number to check palindrome: ");
    scanf("%d", &n);
    num=n;
    while (n!=0)
    {
        rev=(rev*10)+(n%10);
        n/=10;
    }
    if (rev==num)
    {
        printf("Yes, %d is palindrome.", num);
    }
    else
    {
        printf("No, %d isn't palindrome.", num);
    }
    return 0;
}