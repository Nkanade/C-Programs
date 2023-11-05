//write a program to find the max of Two Numbers in the array.

#include<stdio.h>

int main()
{

    int i,a[5],max;

    printf("Enter The Number :");
    for(i=0;i<5;i++)
    {

        scanf("%d",&a[i]);
    }

    max=a[0];
    for(i=0;i<5;i++)
    {

        if(a[i]>max)
        {

           max=a[i];
        }
    }

    printf("Maximum Number =%d",max);
}