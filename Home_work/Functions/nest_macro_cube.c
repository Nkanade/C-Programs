// Nest the macro square in another macro cube to find the cube of a


#include<stdio.h>
#define sq(a) (a)*(a)
#define cube(a) sq(a)*(a)


int main()
{

    int a=4;
    printf("Cube =%d",cube(a));
}