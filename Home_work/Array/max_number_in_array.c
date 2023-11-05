
#include<stdio.h>

int main()
{

    int a[10],i,max,n;

    printf("How Many Number You Want To Enter :");
    scanf("%d",&n);

    printf("Enter tHe Element :");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }

    max=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    printf("Maximum number In Array Is =%d",max);
}