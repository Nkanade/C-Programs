// Q1. Accept a number form the user and check if the number is divisible by 5.

#include<stdio.h>

int main()
{

    int num;
    printf("Enter a Number :");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("Number is Divisible");
    }
    else
    {
        printf("Number is Not Divisible");
    }
}