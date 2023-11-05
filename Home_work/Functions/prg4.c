//Q6.
#include<stdio.h>

int addition(int a,int b);

int main()
{
    int a,b;
    int c=addition(10,20);
    printf("Addition =%d",c);
}

int addition(int a,int b)
{

    int sum=a+b;
    return sum;
}