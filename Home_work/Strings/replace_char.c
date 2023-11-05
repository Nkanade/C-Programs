// replace the character 'a' in the string with character 'e'.
#include<stdio.h>
#include<string.h>

int main()
{

    char ch[10];
    int i;

    printf("Enter The String :");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a')
        {
            ch[i]='e';
        }

    }
    printf("New String %s",ch);


}