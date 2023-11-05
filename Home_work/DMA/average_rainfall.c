/*write a code snippet to store rainfall values of 4  months.
number of years  "n" should be accpetd from the user .
Accept the temperature for these "n" years.
- calculate the average rainfall monthwise and display value.*/

#include<stdio.h>
#include<stdlib.h>

int avgRainfall(int * rain);
char months(char *month);
int main()
{
    int *rain,i;
    char *month;

   
     months(month);
 
        
      
      
    rain=(int *)malloc(4*sizeof(int));
    printf("Enter The Rain Monthwise :\n");
    for(i=0;i<4;i++)
    {
        scanf("%d",(rain+i));
    }

         avgRainfall(rain);
}
int avgRainfall(int *rain)
{

    int i;
    float sum=0,avg;

   

    for(i=0;i<4;i++)
    {
        sum=sum+*(rain+i);
    }

    printf("Average Rainfall MonthWise :\n");
    for(i=0;i<4;i++)
    {
         avg=sum/4;
        printf(" \nAverage_Rain=%d",avg);
    }
   
}
char months(char *month)
{
    int i;
    
    printf("Enter The Rainfall of Four Months \n ");
    month=(char *)malloc(4*sizeof(char));
    printf("Enter The Months :");
    for(i=0;i<4;i++)
    {
       scanf("%c",(month+i));
    }

}