//c program to print sum of all numbers from 1 to n
#include <stdio.h>

int main()
{
    int i, n, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum+=i;
    }
    printf("sum of numbers from 1 to %d: %d \n", n, sum);
    return 0;
}