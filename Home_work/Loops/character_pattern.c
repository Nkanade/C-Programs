#include<stdio.h>

int main()
{
for(int i=1;i<=4;i++)
{
    for(int j=1;j<=i;j++)
    {

        printf("\t%c",96+j);
    }
    printf("\n");
}
    
}

/*

        a
        a       b
        a       b       c
        a       b       c       d

*/