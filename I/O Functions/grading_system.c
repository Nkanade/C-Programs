/* 
take marks from user
compare marks >75 A
                65> B
                40> c
                <40 F

*/


#include<stdio.h>

int main()
{

    int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);
    if(marks>75)
    {
        printf("Grade A");

    }
    else if (marks>65)
    {

        printf("Grade B");

    }

    else if (marks >40)
    {
        printf("Grade C");
    }
    
    else if(marks<40)
    {
       printf("Grade F");
    }
    else 
    {

        printf("Enter Valid Input");
    }
    
    


}
