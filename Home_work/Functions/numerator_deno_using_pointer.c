#include<stdio.h>

void division(int a,int b,int *,int *);

int main()
{

    int n,d,x,y;
    printf("Enter The Numerator & Denomintor :");
    scanf("%d%d",&n,&d);
    division(n,d,&x,&y);
    printf("Qutiotent=%d\n Remainder=%d",x,y);
}

void division(int a,int b,int *x,int *y)
{
    *x=a/b;
    *y=a%b;


}