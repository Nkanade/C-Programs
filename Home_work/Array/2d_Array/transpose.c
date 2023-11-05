// write a program to find transpose of matrix.
#include<stdio.h>

int main()
{

    int a[3][3];
    int i,j;

    
    printf("Enter The Array :");
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
            {
                scanf("%d",&a[i][j]);
            }
    }


     // Transpose matrix is converting rows into columns from orignal matrix
    printf("Transpose of Array :\n");
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
            {
               printf("%d\t",a[j][i]);
            }
            printf("\n");
    }
}