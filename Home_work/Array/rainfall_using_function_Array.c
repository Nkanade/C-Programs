
#include<stdio.h>

int rain(int a[7]);
int main()
{

    int a[7],i,avg=0;

    printf("Enter a Rinfall Detils In Day Wise in MM(Milimiter):");
    for(i=0;i<7;i++)
    {

        scanf("%d",&a[i]);
    }

            int ss=rain(a);
            printf("Average Rainfall In Week= %d",ss);

}

int rain(int a[7])
{
    int avg=0,i;
   for(i=0;i<7;i++)
   {
    int avg;
    avg=(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7])/7;
   }
   
    return avg;
}