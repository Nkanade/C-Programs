// Accept 5 numbers in an array.multiply each element by 3 and  store the result in the same array.display the resultant array.

#include<stdio.h>

int main()
{

    int i,a[5];
    printf("Enter The Five Numbers :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {

        a[i]=a[i]*3;
        printf("The Resultant Is =%d",a[i]);
    }
    
    
}