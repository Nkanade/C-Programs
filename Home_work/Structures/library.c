/*Guess The possible entities in a Library management System .
create a structure to hold information of a book .
Declare structure variable to hold information of three books.
Acceptand display information of two customers.
list the possible attributes of book
intialize one of the variable.*/


#include<stdio.h>
#include<string.h>

struct books
{
    int book_id;
    char book_name[10];
    int book_price;
}s1,s2,s3;


int main()
{

    printf("Welcome TO Library management System !!!");
    printf("\nEnter The Book ID :");
    scanf("%d",&s1.book_id);
    printf("\nEnter The Book Name:");
    scanf("%s",s1.book_name);
    printf("\nEnter The Book Price :");
    scanf("%d",&s1.book_price);

    printf("\n");

    printf("\nEnter The Book ID :");
    scanf("%d",&s2.book_id);
    printf("\nEnter The Book Name:");
    scanf("%s",s2.book_name);
    printf("\nEnter The Book Price :");
    scanf("%d",&s2.book_price);

    printf("\n");

    printf("\nEnter The Book ID :");
    scanf("%d",&s3.book_id);
    printf("\nEnter The Book Name:");
    scanf("%s",s3.book_name);
    printf("\nEnter The Book Price :");
    scanf("%d",&s3.book_price);

    printf("\n");

    printf("Library Management Database!! ");
    printf("\nBook_ID=%d Book_Name=%s Book_Price=%d",s1.book_id,s1.book_name,s1.book_price );
    printf("\n");
    printf("\nBook_ID=%d Book_Name=%s Book_Price=%d",s2.book_id,s2.book_name,s2.book_price );
    printf("\n");
    printf("\nBook_ID=%d Book_Name=%s Book_Price=%d",s3.book_id,s3.book_name,s3.book_price );
}



