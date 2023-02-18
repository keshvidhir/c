//c program to print sum of all odd numbers from 1 to n
#include <stdio.h>

int main()
{
    int i, n, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
        sum+=i;
        }
    }
    printf("sum of numbers from 1 to %d: %d \n", n, sum);
    return 0;
}