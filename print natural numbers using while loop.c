//C program to print natural numbers using while loop 
#include <stdio.h>

int main()
{
    int i=1, n;
    printf("Enter the upperlimit: ");
    scanf("%d", &n);
    while(i<=n)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}
