#include<stdio.h>

int main()
{
    char ch;
    printf("Enter Vowels :");
    scanf("\n%c",&ch);
    if (ch=='a'||ch=='i'||ch=='o'||ch=='u'||ch=='e')
    {

        printf("vowels");
    }
    else
    {
        printf("Consonants");
    }
}