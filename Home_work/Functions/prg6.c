// Q8 /*Calculate the power of a number. Both power and number should be accepted from the user and passed to the function.
The result should be printed in main().*/
#include<stdio.h>

int power(int num,int pow);

int main()
{
    int num1,num2;
    printf("Enter The Number :");
    scanf("%d",&num1);
    printf("Enter The Power :");
    scanf("%d",&num2);
    int ss= power(num1,num2);
    printf("%d",ss);
   
}

int power(int num,int pow)
{
    int res=1;
    for(int i=1;i<=pow;i++)
    {
        res=res*num;
    }

    return res;
}
