/* Accept a string from user .
Toggle the case of the letters.if the letter is upper case ,change it to lower case and vice vers.*/

#include<stdio.h>
#include<string.h>


int main()
{

    char ch[10];
    int size,i;


    printf("Enter The String :");
    scanf("%s",ch);

    for(i=0;ch[i]!='\0';i++)
    {

        if(ch[i]>='a'&&ch[i]<='z')
        {
            ch[i]=ch[i]-32;
            printf("%c",ch[i]);
           
        }
       
        else if(ch[i]>='A'&&ch[i]<='Z')
        {

            ch[i]=ch[i]+32;
             printf("%c",ch[i]);
        }
    }
}
