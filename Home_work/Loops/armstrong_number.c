// Q6.Accept a number from the user and check if it is Armstrong or not.

#include<stdio.h>


int main()
{

    int num,rem,sum=0;
    printf("Enter a Number :");
    scanf("%d",&num);
    int temp=num;
    while (num!=0)
    {
       rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
   if(temp==sum)
   {

    printf("Armstrong Number");
   }
   else
   {

    printf("Not Armstrong Number");
   }

    
}