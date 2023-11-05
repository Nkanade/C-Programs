#include<stdio.h>

void sqcub(int a,int *s,int *c);

int main()
{
    int a,s,c;
     printf("Enter Number To Find Square & Cube :");
    scanf("%d",&a);
    sqcub(a,&s,&c);
    printf("Square =%d Cube=%d",s,c);

}

void sqcub(int a,int *s,int *c)
{
   
   *s=a*a;
   *c=a*a*a;
    

}