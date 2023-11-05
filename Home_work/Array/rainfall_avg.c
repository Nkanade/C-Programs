// Write a program to accept rainfall in mm over a period of 1 week and diaplay the average.

#include<stdio.h>

int main()
{

    int a[7],i,avg=0;

    printf("Enter a Rinfall Detils In Day Wise in MM(Milimiter):");
    for(i=0;i<7;i++)
    {

        scanf("%d",&a[i]);
    }

    avg=(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7])/7;
    printf("Average Rainfall Is=%d",avg);
   
   
   
}