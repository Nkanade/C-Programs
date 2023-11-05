// write a function named "pstrcpy" toperform "strcpy" function 


#include<stdio.h>
#include<string.h>

void pstrcpy(char *str1,char *str2);

int main()
{

    char str1[10],str2[10];

    printf("Enter The String1 :");
    gets(str1);

    pstrcpy(str1,str2);
}
void pstrcpy(char *str1,char *str2)
{

    strcpy(str2,str1);
    printf("copy_String=%s",str2);
}

