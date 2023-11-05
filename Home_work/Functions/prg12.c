//Q16.

#include<stdio.h>

int max(int num1,int num2);

int main()
{
    int num1,num2;
    printf("Program to find Maximum Nuber Among Two Numbers");
    printf("\n Enter Two numbers :");
    scanf("%d%d",&num1,&num2);
    int ss=max(num1,num2);
    printf("%d",ss);
}

int max(int num1,int num2)
{

    if(num1>num2)
    {
        printf("Number 1 Is Greater :");
        return num1;
    }
    else if(num1==num2)
    {
        printf("Both Numbers Are Same :");
        return num1,num2;
    }
    else
    {
        printf("Number 2 is Greater :");
        return num2;
    }
   

}