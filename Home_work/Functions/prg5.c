//Q7.
#include<stdio.h>

int armstrong(int a);

int main()
{
    int num;
    printf("Enter a Number :");     
    scanf("%d",&num);
    int ss=armstrong(num);
   // printf("%d",ss);

}

int armstrong(int a)
{
    int sum=0,rem,temp;
    temp=a;
    while (a!=0)
    {
        rem=a%10;
        sum=sum+(rem*rem*rem);
        a=a/10;
    }
    
   
    if(temp==sum)
    {
        printf("Armstrong Number ");
    }
    else
    {
        printf("Not armstrong Number");
    }

    return sum;
}