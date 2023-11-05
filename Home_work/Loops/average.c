#include<stdio.h>

int main()
{
    int sub1,sub2,sub3,sub4,sub5,avg;
    printf("Enter marks of Subject1 :");
    scanf("%d",&sub1);
    printf("Enter marks of Subject2 :");
     scanf("%d",&sub2);
    printf("Enter marks of Subject3 :");
     scanf("%d",&sub3);
    printf("Enter marks of Subject4 :");
     scanf("%d",&sub4);
    printf("Enter marks of Subject5 :");
     scanf("%d",&sub5);
    avg=(sub1+sub2+sub3+sub4+sub5)/5;
    printf("Total Subject Average Marks :%d",avg);


}