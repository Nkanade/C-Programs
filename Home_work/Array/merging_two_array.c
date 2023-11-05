// Declare Two array of integers .Merge The two arrays.

#include<stdio.h>

int main()
{

    int a[5],b[5],c[10],size=5;
    =sizeof(a)
    int i;

    printf("Enter The Element Of Array 1 :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter The Element Of Array 2 :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }

     // Shift elements to the right of the insertion point
    for (int i = 10; i >10; i--) 
    {
        a[i] = a[i - 1];    

    }

    c[i]=a[i];


      printf("After Merging New Array :");
    for(i=0;i<10;i++)
    {
        printf("%d",&a[i]);
    }
}