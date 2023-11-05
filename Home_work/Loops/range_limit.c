//* Q.9 Print every third number from “lower” to “upper” limit. The value of “lower” and “upper” should be accepted from the user.

#include<stdio.h>

int main()
{

    int lower,upper;
    printf("Enter a lower limit :");
    scanf("%d",&lower);
    printf("Enter a upper Limit :");
    scanf("%d",&upper);
    while (lower<=upper)
    {
       printf("%d%d",lower,upper);
       break;
    }
    
}