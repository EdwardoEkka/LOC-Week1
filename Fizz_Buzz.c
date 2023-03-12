/*Write  a program to print the numbers 1 to 100 but replace
multiples of 3 with "Fizz" and multiples of 5 with "Buzz".*/
#include<stdio.h>

int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            if(i%5==0)
            {
                printf("%d\n",i);
            }
            else{
                printf("Fizz\n");
            }
        }
        else if(i%5==0)
        {
            if(i%3==0)
            {
                printf("%d\n",i);
            }
            else{
                printf("Buzz\n");
            }
        }
         else{
        printf("%d\n",i);
    }
        
        
    }
   
}