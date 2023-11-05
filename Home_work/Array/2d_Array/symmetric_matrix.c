/* Accept a matrix and check weather it is symmetric matrix or not .
eg. If the transpose of matrix is same as orignal matrix then it is known as symmetric matrix.*/

#include<stdio.h>

int main()
{

    int a[3][3],b[3][3];
    int i,j,flag=0;

    
    printf("Enter The Array :");
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
            {
                scanf("%d",&a[i][j]);
            }
    }

     // Orignal Matrix  "A"
    printf("Orignal Matrix A :\n");
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
            {
               printf("%d\t",a[i][j]);
            }
            printf("\n");
    }

    // Transpose of matrix "A"
    printf("Transpose of Matrix :\n");
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
            {
               b[j][i]=a[i][j];
                printf("%d\t",b[j][i]);
            }
            printf("\n");
    }

    // Comapring Transpose Matrix "A" with Orignal Matrix "B".

     for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
            {
              if(a[i][j]!=b[i][j])
              {
                flag=1;
                break;
              }
            }
            
    }

    if(flag==0)
    {
        printf("Symmetric Matrix");

    }
    else
    {
        printf("Skew-Symmetric Matrix");
    }
}


/*O/P:
Orignal Matrix A :
0       1       -2
-1      0       3
2       -3      0
Transpose of Matrix :
0       1       -2
-1      0       3
2       -3      0
Skew-Symmetric Matrix
-------------------------------------------------------

Enter The Array :1 1 -1 1 2 0 -1 0 5
Orignal Matrix A :
1       1       -1
1       2       0
-1      0       5
Transpose of Matrix :
1       1       -1
1       2       0
-1      0       5
Symmetric Matrix

--------------------------------------------------------




*/