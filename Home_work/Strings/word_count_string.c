//count the total word in the string 
#include<stdio.h>
#include<string.h>


int main()
{

    char ch[10];
    int count=0,i;

    printf("Enter The String :");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {

    
        count++;
    }
    printf(" Total Word In String :%d",count);


}