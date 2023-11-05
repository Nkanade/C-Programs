// Accepts two nemes of two customers from the user print the name and its length which is longer in length.

#include<stdio.h>
#include<string.h>

int main()
{

    char a[100],b[100];

    printf("Emter The string 1 :");
    gets(a);
    printf("Enter The String 2 :");
    gets(b);
    int len1=strlen(a);
    int len2=strlen(b);

    if(len1>len2)
    {
         printf("Customer_Name=%s String_Length=%d",a,len1);
    }
    else if (len2>len1)
    {
       printf("Customer_Name=%s String_Length=%d",b,len2);
    }
     else if (len2==len1)
    {
       printf("String length is Equal");
    }
}