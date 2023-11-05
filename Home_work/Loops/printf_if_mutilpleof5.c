/*Write a program to accept numbers from the user.print the number if it is a multiple of 5 .if not then ask for 
another number.stop when the user enters zero .*/



#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
   a: printf("\nEnter a Number :");
   b: scanf("%d",&num);
    if(num==0)
    {
        exit(0);
    }
     else if (num%5==0)
    {
        printf("%d Is Multiple Of 5",num);
    }
    else
    {
        printf("\n%d Is Not Multiple Of 5 !!!",num);
        goto a;
        goto b;
        
    }   
    
   
}