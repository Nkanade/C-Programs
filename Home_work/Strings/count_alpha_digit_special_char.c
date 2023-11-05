// count the total alphabets,digits,special_symobols in the string .

#include<stdio.h>
#include<string.h>

int main()
{

    char ch[200];
    int i,alpha,digit,special;
    alpha=digit=special=0;

    printf("Enter the String  :");

    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {

        if(ch[i]>='a'&&ch[i]<='z'||ch[i]>='A'&&ch[i]<='Z')
        {

            alpha++;
           
        }else if(ch[i]>='0' && ch[i]<='9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }
      printf("\nTotal_Aphabets=%d",alpha);
      printf("\nTotal_Digits=%d",digit);
      printf("\nTotal_special_Character=%d",special);
}
