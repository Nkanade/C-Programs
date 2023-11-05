#include<stdio.h>

void maximum(int *a,int n);

int main()
{

    int a[10],i,n;

    printf("How Many Elements You Wants To Enter :");
    scanf("%d",&n);

   printf("Enter The Elements :");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }

    maximum(a,n);
}

void maximum(int *a,int n)
{

    int i,max;
 
      max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

        
    }

    printf("Maximum number =%d",max);


}