//c program to find first and last digitsof a number
#include <stdio.h>

int main()
{
    int n, firstdigit, lastdigit;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    firstdigit=n;
    while(firstdigit>=10)
    {
        firstdigit=firstdigit/10;
    }
    printf("First digit is: %d\n", firstdigit);
    
    lastdigit=n%10;
    printf("Last digit is: %d", lastdigit);
    return 0;
}
