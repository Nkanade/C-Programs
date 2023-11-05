//Q4.
#include<stdio.h>

void oddEven(int a);

int main()
{
    oddEven(3);

}

void oddEven(int a)
{

    if(a%2==0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
}