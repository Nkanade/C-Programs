/*Guess The possible entities in a banking application .
create a structure to hold information of a customer .
Declare structure variable to hold information of twocustomers.
Acceptand display information of two customers.*/
#include<stdio.h>
#include<string.h>

struct bank
{
    int cust_id;
    char cust_name[20];
    char branch_name[10];

}t1[10];


int main()
{

    int n,i;
    printf("Enter The Number Of Customers:");
    scanf("%d",&n);

    printf("Welcome To Axis Bank !!!");
    for(i=0;i<n;i++)
    {
        printf("\nEnter The Customer Id :");
        scanf("%d",&t1[i].cust_id);
        printf("\nEnter The Customer Name :");
        scanf("%s",t1[i].cust_name);
        printf("\nEnter The Customer Branch Name :");
        scanf("%s",t1[i].branch_name);
    }

    printf("\nCustomer Banking Details :");
    for(i=0;i<n;i++)
    {
        printf("\nCustomer_Id=%d \nCustomer_name=%s \nCustomer_branch=%s",t1[i].cust_id,t1[i].cust_name,t1[i].branch_name);
    }
    printf("\n");
    
}