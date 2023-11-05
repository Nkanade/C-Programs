/*Modify the structure book written in the previous session .store the 'date of publication 'for the book .
[Hint: Declare another structure to store the date .nest it in "book"]*/

#include<stdio.h>
#include<string.h>
#include<time.h>


struct books
{
    int book_id;
    char book_name[10];
    int book_price;
};

struct date
{
    
    int day;
    int month;
    int year;                       // time_t is the data type for time and t is variable;
    struct books s1;
}s2;

int main()
{

    //time(&s2.t);                     // time() function in time.h header file used;
    printf("Welcome TO Library management System !!!");
    printf("\nEnter The Book ID :");
    scanf("%d",&s2.s1.book_id);
    printf("\nEnter The Book Name:");
    scanf("%s",s2.s1.book_name);
    printf("\nEnter The Book Price :");
    scanf("%d",&s2.s1.book_price);
     printf("Enter The date in the format (dd/mm/yyyy):");
    scanf("%d%d%d",&s2.day,&s2.month,&s2.year);
        
    // Printing 
    printf("\nBook_ID=%d \nBook_Name=%s \nBook_Price=%d",s2.s1.book_id,s2.s1.book_name,s2.s1.book_price );
    //printf("\nPublish date and Time=%s",ctime(&s2.t));  // ctime() function in time.h header file is used
                                                    // which is used to print current system time

                                                                                                     
    printf("Publish Date=%d\t%d\t%d",s2.day,s2.month,s2.year);

    

}