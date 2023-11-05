#include<stdio.h>

int main()

{

    int a[10],i,j,n,temp,min;

    printf("How Many elements You Wants To enter :");
    scanf("%d",&n);

    printf("Enter The Elements :");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        min=i;
        for(j=0;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
            if(min!=i)
            {

                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
        }
    }
    printf("Sorted Array  :");
    for(i=0;i<n;i++)
    {

        printf("%d\t",a[i]);
    }



}