#include<stdio.h>

int main()
{

    char ch,lower,upper;
    printf("Enter a character :");
    scanf("%c",&ch);
    
    lower=ch+32;
    upper=ch-32;

    if (ch==lower)
    {
       printf("\n%c",lower);
    }
    else
    {
        printf("\n%c",upper);

    }


}