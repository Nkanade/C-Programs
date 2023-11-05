#include<stdio.h>
int main()
{

    int num,rev=0;
    printf("Enter a number :");
    scanf("%d",&num);
    int temp=num;
    while (num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    if (temp==rev)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Not Palindrome Number");
    }
    
    

}