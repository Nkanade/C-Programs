#include<stdio.h>


void insertvalue(int a[10],int size,int ele,int pos);

int main()
{


    int a[10],i,pos,size,ele;

    printf("Enter The How Much Element To Insert :");
    scanf("%d",&size);
    printf("Enter The Elements :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter The position To Insert :");
    scanf("%d",&pos);

  
    insertvalue(a,size,ele,pos);


}

void insertvalue(int a[10],int size,int ele,int pos)
{
    int i;
  for (int i = size; i > pos; i--) 
    {
        a[i] = a[i - 1];    

    }
     printf("Enter The Element To Insert :");
    scanf("%d",&ele);

    a[pos]=ele;
    size++;

printf("Updated Array :");
  for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }

}