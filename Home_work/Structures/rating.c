#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{

    float ea,eb,ra,rb;
    int i;
    printf("Here Base Ponts IS 10 You Can RATE!!");
    for(i=0;i<=10;i++)
    { printf("\nEnter the rating for A:");
    scanf("%f",&ra);
    printf("\nEnter the rating for B:");
     scanf("%f",&rb);
     }
   
    
    ea=1/1+10*(rb-ra)*10;
    eb=1/1+10*(ra-rb)*10;
     printf(" \nEA  points=%f",ea);
    printf("\nEB  points=%f",eb);
    if(ea>eb)
    {
        printf(" \nEA is Greater points=%f",ea);

    }
    else if(eb>ea)
    {
          printf("\nEB is Greater points=%f",eb);
    }
}