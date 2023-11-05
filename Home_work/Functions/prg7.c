// Q9

#include<stdio.h>

int division(int a);

int main()
{

    int num;
    printf("Enter The Number :");
    scanf("%d",&num);
    division(num);
}

int division(int a)
{
    
    if(a%5==0)
    {
        printf("Number Is Divisible");
    }
    else
    {
        printf("Number Is Not Divisible");
    }


}