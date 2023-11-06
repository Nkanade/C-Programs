/*Q17. Accept number from user pass to the function and find number ispositive or negative in function and print the result in main function.*/

#include<stdio.h>

int posNegative(int num);                            // Function Declaration 
                                                    // with return and with argument

int main()
{
    int num;
    printf("Enter The Number :");
    scanf("%d",&num);
    int ss=posNegative(num);                        // Calling a function and passing 'num' and accepting a return value
    printf("%d",ss);                                // Printing a return value

}

int posNegative(int num)                            // Function Declaration
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
