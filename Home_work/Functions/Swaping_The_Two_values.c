/*Q5. Write a function to swap the values of two variables using a thrid variable .*/
#include<stdio.h>

void swap();                    // Here We Declare The Swap Function.

int main()
{
    swap();                    // Here We Call The Function.
}

void swap()
{
    int num1,num2,temp;
    printf("Enter The Number1 :");
    scanf("%d",&num1);
    
    printf("Enter The Number2 :");
    scanf("%d",&num2);
    
    temp=num1;                            // Here Is The Swaping Logic.
    num1=num2;
    num2=temp;
    
    printf("\n%d",num1);                   // Here We Print the Num1 and Num2.
    printf("\n%d",num2);

}
