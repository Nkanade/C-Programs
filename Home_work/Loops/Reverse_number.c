
#include<stdio.h>
// Q2. Accept a number from the user. Reverse the number and print it.
 
int main()
{
    int num,rev=0;
    printf("Enter a number :");
    scanf("%d",&num);
    while (num!=0)
    {
    rev=rev*10+num%10;
    num=num/10;
    

    }
     printf("%d",rev);
    
    
}