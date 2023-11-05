/* Add to the Banking Application
1.Write a function named "dispinfo that dispaly the information of a customer
2.Write a function named "acceptinfo" that accepts the informationof a cusomer.*/
#include<stdio.h>
#include<string.h>

struct bank
{

    int cust_id;
    char cust_name[10];

}s1;

struct bank acceptinfo()
{
    printf("Enter The Customer_ID:");
    scanf("%d",&s1.cust_id);
    printf("Enter The Customer_Name:");
    scanf("%s",s1.cust_name);

    return s1;
}

void dispinfo(struct bank ss)
{
    printf("\nCustomer_Id=%d \nCustomer_Name=%s",ss.cust_id,ss.cust_name);

}

int main()
{
    struct bank ss=acceptinfo();
    dispinfo(ss);
}