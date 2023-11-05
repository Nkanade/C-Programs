/*Add to the earlier library management application.
1.write a function named "dispinfo" that display the information pf a book.
2. write a function named "acceptinfo" that accepts the information of a book.
*/
#include<stdio.h>
#include<string.h>

struct book
{
    int book_id;
    char book_name[10];
    int book_price;
}s1;


struct  book acceptinfo()
{
    printf("Welcome To Library !!");
    printf("\nEnter The Book_ID:");
    scanf("%d",&s1.book_id);
    printf("\nEnter The Book_Name:");
    scanf("%s",s1.book_name);
    printf("\nEnter The Book_Price:");
    scanf("%d",&s1.book_price);

    return s1;
   
}

void dispinfo(struct book s2)
{
    printf("\nLibrary Management Database :");
    printf("\nBooh_Id=%d \nBook_name=%s \nBook_price=%d",s2.book_id,s2.book_name,s2.book_price);
}

int main()
{
    struct book s2=acceptinfo();
    dispinfo(s2);

}
