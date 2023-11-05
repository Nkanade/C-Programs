
// Search The Number Entered By The User In Array By Using Pointer .
#include<stdio.h>

void search(int *a,int size,int ele);

int main()
{
    int a[10],size,ele,i;
    printf("How Many Elements You Wants To Enter :");
    scanf("%d",&size);

    printf("Enter The Elements :");
    for(i=0;i<size;i++)
    {

        scanf("%d",&a[i]);
    }

      printf("Enter The Element To Search :");
      scanf("%d",&ele);


    search(a,size,ele);
}
void search(int *a,int size,int ele)
{
    int flag=0,i;
    for(i=0;i<size;i++)
    {
        if(a[i]==ele)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("search Number=%d Element Position=%d",ele,i+1);
    }
    else
    {

        printf("Number Not Found !!");
    }
}