/* Accept  a string form the user .count the number of vowels and print the count*/

#include<stdio.h>
#include<string.h>

int main()
{

    char vowel[100];
    int size,i,count=0;

    printf("Enter The Size of String :");
    scanf("%d",&size);

    printf("Enter The String ");
      scanf("%s",vowel);

    for(i=0;vowel[i]!='\0';i++)
    {
        if(vowel[i]=='a'||vowel[i]=='i'||vowel[i]=='o'||vowel[i]=='u'||vowel[i]=='e')
        {
            count++;
            
        }
    }
     printf("Number Of Vowels=%d",count);
  
}