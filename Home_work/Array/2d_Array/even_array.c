// write a program to accept 2D array display even  number from it.

#include<stdio.h>

int main()
{

    int a[2][2];
    int i,j;

    printf("Enter The Array :");
    for(i=0;i<2;i++)
    {
            for(j=0;j<2;j++)
            {
                scanf("%d",&a[i][j]);
            }
    }


    printf("Even Numbers in The Array :");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(a[i][j]%2==0)
            {
                printf("%d\t",a[i][j]);
            }
        }
    }
}