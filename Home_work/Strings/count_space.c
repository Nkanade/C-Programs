// count the number of spaces in the given string print the count.

#include<stdio.h>
#include<string.h>

int main()
{

    char a[100];
    int i,count=0;

    printf("Enter The String :");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
           count++;
        }
    }
    printf("spaces_in String=%d",count);
}