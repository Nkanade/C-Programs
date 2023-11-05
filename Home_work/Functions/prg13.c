//Q17

#include<stdio.h>

int posNegative(int num);

int main()
{
    int num;
    printf("Enter The Number :");
    scanf("%d",&num);
    int ss=posNegative(num);
    printf("%d",ss);

}

int posNegative(int num)
{
    if(num>0)
    {
        printf("Number Is Positive =");
        return num;
    }
    else
    {
        printf("Number Is Negative =");
        return num;
    }

}