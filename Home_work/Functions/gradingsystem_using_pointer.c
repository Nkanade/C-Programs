/* Accept roll number(Integer) and aggregate marks (decimal value) from the user in main() function .
write a function that accepts roll number and marks as parameters and return the grade as per the 
follwing data.
marks>= 90 -grade A
marks >=75 and marks <= 90- grade B
marks >= 60 and marks <=75 - grade C
marks <60 - grade D
(pass By value and return the value)
*/

#include<stdio.h>

int grade(int roll_num,float marks);

int main()
{
    int roll_num;
    float marks;

    printf("Emter The Roll Number :");
    scanf("%d",&roll_num);
    printf("Enter Aggregate Marks :");
    scanf("%f",&marks);
    float ss=grade(roll_num,marks);
 if(ss==1)
    {
        printf("Grade-A");
    }
    else if (ss==2)
    {
       printf("Grade-B");
    }
    else if (ss==3)
    {
         printf("Grade-c");
    }
    else if(ss==4)
    {
         printf("Grade-D");
    }
  
}

int grade(int roll_num,float marks)
{
    if(marks>=90&&marks<=100)
    {
        return 1;
    }
    else if (marks>=75&& marks<=90)
    {
       return 2;
    }
    else if (marks>=60 && marks<=75)
    {
        return 3;
    }
    else if(marks<60)
    {
        return 4;
    }
   else
   {
        printf("Incorrect Marks !!!");
   }
    
}