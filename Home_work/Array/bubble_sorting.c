#include<stdio.h>


int main()
{

    int a[10],i,n,j,temp;


    printf("Enter The How many elements You Want :");
    scanf("%d",&n);

    printf("Enter The Elements :");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }

    printf("Sorted Array :");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }


}