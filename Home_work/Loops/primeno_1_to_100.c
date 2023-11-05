#include<stdio.h>

int main()
{
   int c=0;
   for(int i=1;i<=100;i++)
   {
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
          
            c++;
            break;
        }
       
    }
    if(c==0 &&i!=1)
     printf("\n%d",i);
       c=0;
   }
 
}6