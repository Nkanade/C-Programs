/* calculate the average salary of all clerks in the organization 
Accept the number of clerks from the user and the their salary. display the average salary in main().*/

#include<stdio.h>
#include<stdlib.h>

int sal(int *ptr,int n);
int main()
{

    int *ptr,n,i;

    printf("Enter the total number of clerks :");
    scanf("%d",&n);

     printf("Enter the Salary :");
     
    ptr=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));


    }

    float ss=sal(ptr,n);
    printf("Average_salary_of_clerks Is =%f ",ss);
}
int sal(int *ptr,int n)
{
    float sum=0,avg;
    for(int i=0;i<n;i++)
    {
    sum+=*(ptr+i);
    }
    avg=sum/n;
    return avg;
}