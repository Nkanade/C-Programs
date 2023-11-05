#include<stdio.h>
#include<stdlib.h>
 int card_digit,account_type,ch,p,aa,temp;
int amount_withdraw,balance=10000,total_amount;
int check_balance(int totl_amount);


int main()
{
    
   printf("\n");
    printf("Welcome To Axis Bank ATM Services !!!");
    printf("\n\nEnter Your Last Four Digit Of ATM Card :");
    scanf("%d",&card_digit);
     printf("\n Please choose Your Account ");
    printf("\n1.saving \n2.Current :");
    scanf("%d",&account_type);
     a:printf("\n1.Cash Withdraw \n2.Check Balance \n3.Cancel :");
    scanf("%d",&ch);
   
    switch (ch)
    {
    
    case 1: printf("Enter Amount :");
            scanf("%d",&amount_withdraw);
            printf("\nCash Withdraw Successfully !!!");
            printf("\nThank You For Visiting Us :)");
            printf("\n");
             goto a;
            break;
    case 2:
             check_balance(total_amount);
            break;
          
    case 3:exit(0);


    default:
                printf("Incorrect Input !!!");
                break;
    }

return 0;
}

int check_balance(int total_amount)
{
                
    total_amount=balance-amount_withdraw;
    printf("Your Account Balance :%d",total_amount);
    return total_amount;
 }
