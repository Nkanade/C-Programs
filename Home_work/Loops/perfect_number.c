#include<stdio.h>

int main()
{
    int num,rem,sum=0;

    printf("Enter a Number :");
    scanf("%d",&num);
   for(int i=1;i<num;i++)
   {

        rem=num%i;

        if (rem==0)
        {
          sum=sum+i;
        }
        

   }
   if(sum==num)
   {
    printf("Perfect Number ");
   }
   else
   {
    printf("Not Perfectnumber");
   }
}