#include<stdio.h>

int main()
{

    int num,cube,square;
    printf("Enter Number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        square=i*i;
        cube=i*i*i;
        printf("\nnumber=%d Suare =%d",i,square);
        printf("\nnumber=%d Cube =%d",i,cube);
       
    }
   

   


}