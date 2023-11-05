/*Modify the structure Employee written in the previous session. Store the 'date of joining' for the Employee
[Hint: Declare another structure to store the date .Nest it "Employee"]*/

#include<stdio.h>
#include<string.h>
#include<time.h>

struct employee
{
    int emp_id;
    char emp_name[10];
    int emp_sal;
};

struct date 
{
    
    int day;
    int month;
    int year;                                 
    struct employee s1;
   
}dt;

int main()
{
    
 
    printf("Enter The Employee Details !!!");
    printf("\nEnter The Employee Id :");
    scanf("%d",&dt.s1.emp_id);
    printf("\nEnter The Employee Name :");
    scanf("%s",dt.s1.emp_name);
    printf("\nEnter The Employee Salary :");
    scanf("%d",&dt.s1.emp_sal);
    printf("Enter The date in the format (dd/mm/yyyy):");
    scanf("%d%d%d",&dt.day,&dt.month,&dt.year);
        
    //printing the output
    printf("\nEmployee_Id=%d \nEmployee_name=%s \nEmployee_salary=%d ",dt.s1.emp_id,dt.s1.emp_name,dt.s1.emp_sal);
   

                                                    
    printf("Joinnig_Date=%d\t%d\t%d",dt.day,dt.month,dt.year);

}



