/* Write a program to print Right Angle Triangle For Star Pattern *


*/

#include<stdio.h>
int main()
{
    int i,j;

    for (i=1;i<=4;i++)
    {
       for (j=1;j<=i;j++)
       {
          printf("\t*");
       }
    
        printf("\n");
    }

     
}
/*
        *
        *       *
        *       *       *        
        *       *       *       *

*/