#include<stdio.h>

int main()
{

    int num;
    printf("Enter a Number :");
    scanf("%d",&num);
    for (int i=2;i<=num/2;i++)
    {
       if (num%i==0)
       {
        printf("Not Prime Number");
        break;
       }
       else
       {

        printf("Prime Number");
        break;
       }
      
       
       
    }
    
}