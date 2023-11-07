/*Q3. Write a function that finds the square of a number passes as an argument to it. The function should print the result.*/

#include<stdio.h>

void square(int x);     // Function Declaration 

int main()
{
    square(5);            // Function Calling
                            // here in the function we have passed the value 5

}

void square(int x)            // Function Defination
{
    int sq=x*x;                 // Here We Calculate The Square 
    printf("%d",sq);
}
