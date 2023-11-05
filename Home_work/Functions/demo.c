// sum of even number from 1 to 20

#include<stdio.h>

int main()
{

   int i,sum=0;
   for(i=0;i<=20;i++)
   {
      if(i%2==0)
      {
         sum=sum+i;
        
      }
      
   }
   printf("sum of Even=%d",sum);

}
