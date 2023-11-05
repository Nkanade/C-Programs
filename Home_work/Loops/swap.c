//Q. Write a program to accept two number from user and swap them using third variable.
#include<stdio.h>

int main()
{

    int num1,num2,temp;

    printf("Enter num1 :");
    scanf("%d",&num1);
    printf("Enter Num2 :");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\n num1 :%d",num1);
    printf("\n Num2 :%d",num2);
    
}