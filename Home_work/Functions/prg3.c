//Q5. Swap Two Numbers With Third Variable
#include<stdio.h>

void swap();

int main()
{
    swap();
}

void swap()
{
    int num1,num2,temp;
    printf("Enter The Number1 :");
    scanf("%d",&num1);
    printf("Enter The Number2 :");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\n%d",num1);
    printf("\n%d",num2);

}