/* Q4.Accept age and gender(in the form of character ‘m’ or ‘f’) from the user.
          If the age is greater than 25 and gender is ‘f’ ---> eligible for Policy 1
          If the age is greater than 25 and gender is ‘m’ ---> eligible for Policy 2
          others ---> eligible for Policy 3*/


#include<stdio.h>

int main()
{

    int age;
    char gen;
    printf("Enter your Age :");
    scanf("%d",&age);
    printf("Enter Your Gender :");
    scanf("\n%c ",&gen);
    if(age>=25)
    {
        if(gen=='f')
        {

            printf("Eligible for Policy 1");

        }
        else
        {
             printf("Eligible For Policy 2");

        }
       
    }
  else
  {
     printf("Eligible for Policy 3");
  }
  
   
}
