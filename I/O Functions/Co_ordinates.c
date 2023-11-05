/* take input from user in the form of coordinates
    and show in which quadrants they present

*/

#include<stdio.h>

int main()
{

    int x,y;
    printf("Enter X Co-ordinates :");
    scanf("%d",&x);
    printf("Enter Y Co-ordinates :");
    scanf("%d",&y);
    if(x>0&&y>0)
    {
        printf("I Quadrant");
    }
    else if (x<0&&y>0)
    {
        printf("II Quadrant");
    }
    else if (x<0&&y<0)
    {
        printf("III Quadrant");
    }
    else if(x>0&&y<0)
    {

        printf("IV Quadrant");
    }
    else
    {
        printf("Enter valid Co-ordinates");
    }
    
    
}