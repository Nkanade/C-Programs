#include<stdio.h>

int main()
{

    int i,j;
    for(i=1;i<=4;i++)
    {
        for (j=1;j<=i;j++)
        {
           printf("\t%d",i);
        }
        printf("\n");
    }
}

/*
        1
        2       2
        3       3       3        
        4       4       4       4
*/