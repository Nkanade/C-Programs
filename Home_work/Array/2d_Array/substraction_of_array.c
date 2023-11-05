// write a program to accept 2D array and perform substraction.

#include<stdio.h>

int main()
{

    int a[2][2],b[2][2],c[2][2];
    int i,j;

// Accepting first matrix
    printf("Enter The Array  Matrix  A of 2x2 :");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // Accepting Second matrix
    printf("Enter The Array  Matrix  B of 2x2 :");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    // performing matrix substraction
     printf("Substraction Of Matrix :");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           c[i][j]=a[i][j]-b[i][j];
            printf("%d\t",c[i][j]);
          
        }
        
    }
}