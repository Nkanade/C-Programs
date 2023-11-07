/*Q6. Write a function that accepts two parameters as integers.The function should add the two integers and return the result.
The result should be printed in main().*/
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
