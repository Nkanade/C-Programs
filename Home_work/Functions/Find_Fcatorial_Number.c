/*Q10. Write a Function Factorial which accept number a parameter and the factorial of number in a main function.*/

#include<stdio.h>

int fact(int a);                                    // Function Declration
                                                    // Function With Return Type With Argument.

int main()
{

    int num;
    printf("Enter The Number :");
    scanf("%d",&num);
    int ss=fact(num);                             // Function Calling.                             
    printf("%d",ss);
}

int fact(int a)                                    // Function Definition.
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;                                // Calculating Factorial.
    }
    return fact;                                    // Return fact to calling function.
}  
