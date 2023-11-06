/*Q4.Write a function that accepts a number as a parameter and prints if it is odd or even
a. Write its prototype
b. Call the function.*/
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
