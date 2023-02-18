//c program to find reverse of a number
#include <stdio.h>

int main()
{
    int n, reverse=0;
    printf("Enter a number to get its reverse: ");
    scanf("%d", &n);
    while(n!=0)
    {
        reverse=(reverse*10)+(n%10);
        n/=10;
    }
    printf("Reverse: %d", reverse);
    return 0;
}
