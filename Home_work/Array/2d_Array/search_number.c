// write a program to accept a number from user and search in the array weather it is present or not.

#include<stdio.h>

int main()
{

    int a[2][2];
    int i,j,ele,flag=0;

    printf("Enter The matrix of 2x2 :");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    // here we take element from user to search.
    printf("Enter The Number Wants To Search :");
    scanf("%d",&ele);


 for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           if(a[i][j]==ele)                                  // searching for element in the Array.
           {
               flag=1;
               break;
           }
          

        }
    }

    if(flag==1)
    {
         printf("Element Is Present");
    }
    else
    {
    printf("Element Is Not Present");
    
    }
    
}