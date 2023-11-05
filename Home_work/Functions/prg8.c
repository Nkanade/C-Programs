// Q10.

#include<stdio.h>

int fact(int a);

int main()
{

    int num;
    printf("Enter The Number :");
    scanf("%d",&num);
    int ss=fact(num);
    printf("%d",ss);
}

int fact(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}  