/*Write a program that takes a number as input and
checks whether it is positive, negative or zero.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n>0){
        printf("Positive");
    }
    else if(n<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
}