/* Write a function to accept employee information .
1. Pass the adress of the structure variable to the function.
2. function should have appropriate parameter to point to the address.
*/

#include<stdio.h>
#include<string.h>

struct employee
{
    int emp_id;
    char emp_name[20];
    float emp_sal;

}t1;

void empinfo(struct employee *);

int main()
{
    printf("Enter The Employee Details !!!");
    printf("\nEnter The Employee Id :");
    scanf("%d",&t1.emp_id);
    printf("\nEnter The Employee Name :");
    scanf("%s",t1.emp_name);
    printf("\nEnter The Employee Salary :");
    scanf("%f",&t1.emp_sal);

    empinfo(&t1);

    printf("\n");
    
}
void empinfo(struct employee *p)
{
    printf("\nEmployee Details Are:");
    printf("\nEmployee_Id=%d \nEmployee_name=%s \nEmployee_salary=%f",p->emp_id,p->emp_name,p->emp_sal);
        
}