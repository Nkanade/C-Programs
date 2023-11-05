// Accept the String from the user and check weather a is occurs then replace 'a' with 'A'.
#include<stdio.h>
#include<string.h>

int main()
{

    char a[10];
    int i;

    printf("Enter The String :");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a')
        {
            a[i]='A';
        }
    }

    printf("Updated String =%s",a);
}