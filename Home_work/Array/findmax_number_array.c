// Accept 5 numbers in An array.Find the maimum number in the array without sorting using a function named "findmaximum"

#include<stdio.h>

void findmaximum(int a[5]);

int main()
{

    int a[5],i;
    printf("Enter The Array Element :");
    for(i=0;i<5;i++)
    {

        scanf("%d",&a[i]);

    }

    findmaximum(a);

}

void findmaximum(int a[5])
{
    int i;
    for(i=0;i<5;i++)
    {
        if(a[i]>a[i+1])
        {
            printf("Maximum Number=%d",a[i]);
        }
        
    }

}