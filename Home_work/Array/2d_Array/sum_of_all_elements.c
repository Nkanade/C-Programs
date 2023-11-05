// write a program to accept 2D Array and find sum of its elements.

#include<stdio.h>

int main()
{

    int a[2][2];
    int i,j,sum=0;

    printf("Enter the Array :");
      for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }

    // calculating sum 
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("Sum of Array =%d",sum);
}