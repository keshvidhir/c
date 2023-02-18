//c program to find number of digits in an integer
#include <stdio.h>

int main()
{
    int i, count=0;
    printf("Enter any number: ");
    scanf("%d", &i);
    do
    {
        count++;
        i/=10;
    }
    while(i!=0);
    printf("Number of digits in it: %d", count);
    return 0;
}