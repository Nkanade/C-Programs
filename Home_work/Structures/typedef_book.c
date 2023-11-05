/* typedef the structure book .
Accept information of two book.
Dispaly the information.*/
#include<stdio.h>
#include<string.h>

typedef struct 
{
   int book_id;
   char book_name[10];
   int price;
}emp;

emp s1,s2;

int main()
{

    printf("Enter the Book Id :");
    scanf("%d",&s1.book_id);
    printf("Enter The Book Name :");
    scanf("%s",s1.book_name);
    printf("Enter the Book Price :");
    scanf("%d",&s1.price);

    printf("\n");
    printf("Enter the Book Id :");
    scanf("%d",&s2.book_id);
    printf("Enter The Book Name :");
    scanf("%s",s2.book_name);
    printf("Enter the Book Price :");
    scanf("%d",&s2.price);

    printf("\n");
    printf("Book_Id=%d Book_Name=%s Book_price=%d",s1.book_id,s1.book_name,s1.price);
    printf("\n");
    printf("Book_Id=%d Book_Name=%s Book_price=%d",s2.book_id,s2.book_name,s2.price);
}


