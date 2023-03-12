/*Write a C program to enter two numbers and perform all arithmetic operations
using switch case.*/
#include<stdio.h>

int main()
{
    int a,b;
    int op;
    printf("Enter any two values:");
    scanf("%d %d",&a,&b);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter the operation to be performed:");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("Sum:%d",a+b);
        break;
        case 2:
        printf("Difference:%d",a-b);
        break;
        case 3:
        printf("Product:%d",a*b);
        break;
        case 4:
        printf("Division:%d",a/b);
        break;
        default:
        printf("Enter your correct choice:");
        break;

    }
    
}