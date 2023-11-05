// accpet 2D array and find total and average.

#include<stdio.h>

int main()
{

    int a[2][2];
    int i,j;
    float avg,total=0;

    printf("Enter The Array :");
    for(i=0;i<2;i++)
    {
            for(j=0;j<2;j++)
            {
                scanf("%d",&a[i][j]);
            }
    }

// calculating the total and average 
   
    for(i=0;i<2;i++)
    {
            for(j=0;j<2;j++)
            {
                total=total+a[i][j];
                avg=total/4;
            }

    }
    printf("Array_Total=%d",total);
    printf("Array_average=%f",avg);

}