/* modify Library management Appliaction
write a function named "disDetails" that display the information of a book.
[pass individual members of the structure]*/

#include<stdio.h>
#include<string.h>

struct book
{
    int book_id;
    char book_name[10];
    int book_price;
}s1;

void dispDetails(int  book_id,char book_name[10],int book_price);

int main()
{
    printf("Welcome To Library !!");
    printf("\nEnter The Book_ID:");
    scanf("%d",&s1.book_id);
    printf("\nEnter The Book_Name:");
    scanf("%s",s1.book_name);
    printf("\nEnter The Book_Price");
    scanf("%d",&s1.book_price);

    dispDetails(s1.book_id,s1.book_name,s1.book_price);

}
void dispDetails(int  book_id,char book_name[10],int book_price)
{
    printf("\nLibrary Management Database :");
    printf("\nBooh_Id=%d \nBook_name=%s \nBook_price=%d",s1.book_id,s1.book_name,s1.book_price);
}
