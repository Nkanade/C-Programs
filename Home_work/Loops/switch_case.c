#include<stdio.h>
#include<stdlib.h>

int main()
{

    int ch,num1,num2,res;
    printf("Please Select A MENU \n1.Addition \n2.Substraction \n3.Multiplication \n4.Division \n5.Exit" );
    printf("\nEnter Your Choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
    
        case 1:
               
                printf("\nEnter The value of Num1 :");
                scanf("%d",&num1);
                printf("Enter The value of Num2 :");
                scanf("%d",&num2);
                res=num1+num2;
                printf("\nAddition=%d",res);
                break;
        case 2:
               
                printf("Enter The value of Num1 :");
                scanf("%d",&num1);
                printf("Enter The value of Num2 :");
                scanf("%d",&num2);
                res=num1-num2;
                printf("\nSubstraction=%d",res);
                break;
        case 3:
               
                printf("Enter The value of Num1 :");
                scanf("%d",&num1);
                printf("Enter The value of Num2 :");
                scanf("%d",&num2);
                res=num1*num2;
                printf("\nMultiplication=%d",res);
                break;
        case 4:
                
                printf("Enter The value of Num1 :");
                scanf("%d",&num1);
                printf("Enter The value of Num2 :");
                scanf("%d",&num2);
                res=num1/num2;
                printf("\nDivision=%d",res);
                break;
        case 5:exit(0);

        default:
                printf("Invalid Input !!!");
                break;
    }
}