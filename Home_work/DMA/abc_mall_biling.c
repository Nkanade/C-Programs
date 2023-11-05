/* Calculate the average of billing for ABC mall .Accept the numbers of days and billing per day from the user
to calculate the average .Display the average billing in main().*/

#include<stdio.h>
#include<stdlib.h>

int abcMall(int *ptr,int days);



int main()
{

    int *ptr,days,i;

    printf("Enter The Number of days :");
    scanf("%d",&days);

    ptr=(int*)malloc(days*sizeof(int));

    printf("Enter The Billing Per Day Amount :");
    for(i=0;i<days;i++)
    {

        scanf("%d",(ptr+i));
    }

    float ss= abcMall(ptr,days);
    printf("Average_Biiling_Amount=%f",ss);
}

int abcMall(int *ptr,int days)
{

    int i;
    float sum=0,avg;

    for(i=0;i<days;i++)
    {
        sum=sum+*(ptr+i);
       
    }
     avg=sum/days;
     return avg;

}

