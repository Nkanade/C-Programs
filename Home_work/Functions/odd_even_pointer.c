#include<stdio.h>

void oddEven(int *,int *);

int main()
{
    int sum1=0,sum2=0;
    oddEven(&sum1,&sum2);
    printf("Odd Number=%d\nEven Number=%d",sum1,sum2);
}

void oddEven(int *sum1,int *sum2)
{


    for(int i=1;i<10;i++)
    {
        if(i%2!=0)
        {
            *sum1=*sum1+i;
            
        }
         if(i%2==0)
        {

            *sum2=*sum2+i;
            
        }
    }

}