#include<stdio.h>

/*int main()
{
    int num,fact=1;
    printf("Enter a Number :");
    scanf("%d",&num);
    while (num!=0)
    {
       fact=fact*num;
       num--;
    }
    printf("%d",fact);
    

}*/

int main()
{

    int num,fact=1,i;
    printf("Enter a number :");
    scanf("%d",&num);
    for (i=num;i!=0;i--)
    {
       fact=fact*i;

    }
    printf("%d",fact);
    
}


