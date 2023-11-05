/* Write a function to accept Customer information .
1. Pass the adress of the structure variable to the function.
2. function should have appropriate parameter to point to the address.
*/
#include<stdio.h>
#include<string.h>

struct customer
{
    int cust_id;
    char cust_name[20]; 
}t1;

void custinfo(struct customer *);

int main()
{
    printf("Enter The Customer Details !!!");
    printf("\nEnter The Customer Id :");
    scanf("%d",&t1.cust_id);
    printf("\nEnter The Customer Name :");
    scanf("%s",t1.cust_name);
        
    custinfo(&t1);

    printf("\n");
    
}
void custinfo(struct customer *p)
{
    printf("\nCustomer Details Are:");
    printf("\nCustomer_Id=%d \nCustomer_name=%s",p->cust_id,p->cust_name);
        
}