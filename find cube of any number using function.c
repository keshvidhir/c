//Write a C program to find cube of any number using function
#include <stdio.h>
int cube(int num);
int main(){
    int num;
    int c;
    printf("Enter any number: ");
    scanf("%d", &num);
    c=cube(num);
    printf("Cube of %d is: %d", num, c);
    return 0;
}
int cube(int num){
    return(num*num*num);
}