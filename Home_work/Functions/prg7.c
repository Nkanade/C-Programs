/*Q9. Write a function that prints whether the number passed as parameter is divisible by 5.Accept  the number from the user in main.*/

#include<stdio.h>

int division(int a);                        // Function Declration 

int main()
{

    int num;
    printf("Enter The Number :");
    scanf("%d",&num);
    division(num);                                // Function Calling
}

int division(int a)                                //Function with return type and with Argument
{
    
    if(a%5==0)                                        // Here is the program logic
    {
        printf("Number Is Divisible");
    }
    else
    {
        printf("Number Is Not Divisible");
    }


}
