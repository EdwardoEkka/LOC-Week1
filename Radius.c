/*Write a C program to enter the radius of a circle
and find its diameter, circumference and area.*/
#include<stdio.h>

int main()
{
    float r;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    printf("The diameter is:%f\n",2*r);
    printf("The circumference is:%f\n",2*3.14*r);
    printf("The area is:%f",3.14*r*r);
}