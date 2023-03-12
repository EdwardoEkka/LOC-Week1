/*Write a program that takes a number as input and
prints its sum using do while loop.*/
#include<stdio.h>

int main()
{
    int n;
    int sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        sum=sum+(n%10);
        n=n/10;
    } while (n>0);
    printf("Sum is=%d",sum);
}