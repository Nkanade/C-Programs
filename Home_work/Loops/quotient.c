// Q3. .Write a program that accepts two numbers as numerator and denominator from the user and display the quotient and remainder.

#include<stdio.h>

int main()
{

    int num1,num2,qu,re;

    printf("Enter num1 :");
    scanf("%d",&num1);
    printf("Enter Num2 :");
    scanf("%d",&num2);
    qu=num1/num2;
    re=num1%num2;
    printf("\n%d",qu);
    printf("\n%d",re);

}