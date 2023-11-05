// write a code snippet to check if the given string is a palliindrome.[use strrev function.]
#include<stdio.h>
#include<string.h>

int main()
{

    char a[100],b[100];
    int i,flag=0;
    printf("Enter The String :");
    gets(a);
   
    strcpy(b,a);
    
    strrev(a);

    if(strcmp(a,b)==0)
    {

        printf("Palindrome String");
    }

    else
    {

        printf("Not Palindrome String");
    }
}