//write a program to print only diagonal elements of matrix.
#include<stdio.h>

int main()
{
    int a[3][3];
    int i,j,count=0;

    printf("Enter The 3x3 Matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf(" Matrix  Elements :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    // // printing the only (0,0),(1,1),(2,2)
    // printf("Diagoanl Elements Are : ");
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         if(i==j)
    //         {
    //             printf("%d\t",a[i][j]);
    //         }
    //     }
    // }




    // printing right to left Diagonal Elements (0,2),(1,1),(2,0)
      printf("Diagoanl Elements Are : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0 &&j==2)
            {
                printf("%d\t",a[i][j]);
            }
            else if(i==1 &&j==1)
            {
                printf("%d\t",a[i][j]);
            }
             else if(i==2 &&j==0)
            {
                printf("%d\t",a[i][j]);
            }
        }
    }

}