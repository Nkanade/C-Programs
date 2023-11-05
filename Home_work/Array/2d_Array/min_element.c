//Accept matrix and find minimum element from it.
#include<stdio.h>

int main()
{

    int a[2][2];
    int i,j,min;

    printf("Enter The 2x2 Matrix:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    min=a[0][0];                                    // assining "min" variable as base index [0][0]
    printf("minimum Number In The Array :");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
          if(a[i][j]<min)                           // searching for Minimum elements in Array
          {
            min=a[i][j];
          }
        }
    }
    printf("%d",min);
}