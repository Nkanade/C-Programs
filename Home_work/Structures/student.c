/*Write a structure for student accept the marks of 3 subject and calculate his percentage.*/
#include<stdio.h>
#include<string.h>

struct student
{
    int stud_id;
    char stud_name[10];
    int stud_marks;
   
}t1[3];

int main()
{

    int i,sum=0;
    float per;
    for(i=0;i<1;i++)
    {
    printf("Enter The Student ID :");
    scanf("%d",&t1[i].stud_id);
    printf("\nEnter The Student Name :");
    scanf("%s",t1[i].stud_name);
    }
    printf("\nEnter The 3 Subjects Marks:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&t1[i].stud_marks);
    }
    
     for(i=0;i<3;i++)
    {
      sum=sum+t1[i].stud_marks;
       
    }
    
    per=(sum/300.0)*100;
  

    for(i=0;i<1;i++)
    printf("\nStudent ID=%d \nStudent Name=%s  \nStudent Percentage=%f",t1[i].stud_id,t1[i].stud_name,per);
}