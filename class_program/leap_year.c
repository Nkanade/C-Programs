#include<stdio.h>

int main()
{

    int yr;
    printf("Check wheather you have entered leap year :");
    scanf("%d",&yr);
    if(yr%4==0)
    {

        printf("This is Leap Year");
    }
    else
    {
        printf("This is Not Leap Year");
    }
}