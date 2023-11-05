#include<stdio.h>


void search(int a[5],int ele,int len);

int main()

{
    int a[5],i,ele,len;
    printf("How Much Element You Want to Enter :");
    scanf("%d",&len);
    printf("Enter the Array Elements :");
    for(i=0;i<len;i++)
    {

        scanf("%d",&a[i]);

    }

    printf("Enter the Element To Find :");
    scanf("%d",&ele);
    
   search(a,ele,len);

}

void search(int a[5],int ele,int len)

{
    int i,flag=0;
    for(i=0;i<len;i++)
    {

        if(a[i]==ele)
        {
            flag=1;
            break;
        }
        
    }
      if(flag==1)
    {

        printf("Element =%d Postion=%d",ele,i+1);
    }
    else
    {
        printf("number Is Not Present !!");
    }


  
}

