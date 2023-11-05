// Swaping The Two Numbers Using The Third VAriable Use Pointer In This Program


/*#include<stdio.h>

void swap(int *,int *);

int main()
{
    int x,y,temp,a,b;
    printf("Enter The  Two Number :");
    scanf("%d%d",&x,&y);
    
        swap(&x,&y);
    //printf("%d%d",ss);

}

void swap(int *a,int *b)
{
 
    int temp=*a;
    *a=*b;
    *b=temp;
    //printf("%d\n%d",*a,*b);
   

}*/


#include<stdio.h>


void swap(int a,int b,int *,int *);

int main()
{
    int a,b,x,y;
    printf("Enter The Two Number :");
    scanf("%d%d",&a,&b);
    swap(a,b,&x,&y);

}

void swap(int a,int b,int *x,int *y)
{

    int temp;
    *x=a;
    *y=b;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("%d\n%d",*x,*y);

}


