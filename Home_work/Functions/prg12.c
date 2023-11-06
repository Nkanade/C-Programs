/*Q16. Accept two numbers from user pass to the function and find maximum from and print theresult in main function.*/

#include<stdio.h>

int max(int num1,int num2);                             // Function Declaration
                                                        // function name 'max' having two parameters num1 and num2.
int main()
{
    int num1,num2;
    printf("Program to find Maximum Nuber Among Two Numbers");
    printf("\n Enter Two numbers :");
    scanf("%d%d",&num1,&num2);
    int ss=max(num1,num2);                            // Calling a function and accept return value in variable ss
    printf("%d",ss);
}

int max(int num1,int num2)                            // Function defination
{

    if(num1>num2)                                    // Comparing two values and returning the number.
    {
        printf("Number 1 Is Greater :");
        return num1;
    }
    else if(num1==num2)
    {
        printf("Both Numbers Are Same :");
        return num1,num2;
    }
    else
    {
        printf("Number 2 is Greater :");
        return num2;
    }
   

}
