/* Create an array of employee structure 
accept at least 3 employee info. */
#include<stdio.h>
#include<string.h>

struct employee
{
    int emp_id;
    char emp_name[20];
    float emp_sal;

}t1[10];


int main()
{

    int n,i;
    printf("Enter The Number Of Employees:");
    scanf("%d",&n);

    printf("Enter The Employee Details !!!");
    for(i=0;i<n;i++)
    {
        printf("\nEnter The Employee Id :");
        scanf("%d",&t1[i].emp_id);
        printf("\nEnter The Employee Name :");
        scanf("%s",t1[i].emp_name);
        printf("\nEnter The Employee Salary :");
        scanf("%f",&t1[i].emp_sal);
    }

    printf("\nEmployee Details Are:");
    for(i=0;i<n;i++)
    {
        printf("\nEmployee_Id=%d \nEmployee_name=%s \nEmployee_salary=%f",t1[i].emp_id,t1[i].emp_name,t1[i].emp_sal);
    }
    printf("\n");
    
}