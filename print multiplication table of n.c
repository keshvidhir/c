//c program to print multiplication table of n
#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number to get its table: ");
    scanf("%d", &n);
    printf("The table of %d is as follows: \n", n);
    for(i=1; i<=10; i++)
    {
        printf("%d*%d=%d\n", n, i, n*i);
    }
    return 0;
}