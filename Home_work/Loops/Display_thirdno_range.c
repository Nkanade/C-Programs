#include<stdio.h>

int main()
{


    int lower,upper;
    printf("Enter a lower Range Number:");
    scanf("%d",&lower);
    printf("Enter a Upper Range Number :");
    scanf("%d",&upper);
    for(int i=lower;i<=upper;i=i+2)
    {
        printf("\nSeries of Third Number =:%d",i);
       
    }
}