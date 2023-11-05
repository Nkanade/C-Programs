// Q7.Accept a number from the user. Find the sum of digits of a number.

#include<stdio.h>

int main()
{

    int num,sum=0;
    printf("Enter a Number :");
    scanf("%d",&num);
    while (num!=0)
    {
    sum=sum+num%10;
    num=num/10;
    }
    printf("%d",sum);
    
   
}