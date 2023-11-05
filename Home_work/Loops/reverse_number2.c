// Q8. Accept a number. Reverse it. Check if the reverse and the original number are same.

#include<stdio.h>

int main()
{

    int num,temp,rev=0;
    printf("Enter a Number :");
    scanf("%d",&num);
    temp=num;
    while (num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    printf("%d",rev);
    if (temp==num)
    {
        printf("Orignal Number");

    }
    else
    {

        printf("Not Orignal Number");
    }
    

}