// write a program to accept 2d array and display the sum rowwise.
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

    printf("Matrix Is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


  // sum of rows
    for(i=0;i<2;i++)
    {
          
        for(j=0;j<2;j++)
        {
          
           sum=sum+a[i][j];
          
        }
        printf("\nSum of=%d Row Is =%d",i,sum);
        sum=0;                                     /*Here we initialize sum=0 because after first additon
                                                     sum will store the first addition result.so we need to 
                                                           intialize sum=0 again.*/  
     }
   
}