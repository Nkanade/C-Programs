/*
A program calls a set of functions as and when required The program should print the number of all function calls in main. 

note : Assume that there are two functions names swap and findsquare already defined.
*/

#include<stdio.h>

int addition(int a,int b);
int substraction(int a,int b);

int main()
{
    int a,b;
    printf("Enter The Value of A And B :");
    scanf("%d%d",&a,&b);
    int ss=addition(a,b);
    ss=addition(a,b);
    ss=addition(a,b);
    
    printf("\nfunction count =%d",ss);
    int dd=substraction(a,b);
    dd=substraction(a,b);
    printf("\nfunction count =%d",dd);

}

int addition(int a,int b)
{
    int sum=0;
    static int count=0;
    sum=a+b;
    printf("\nAddition =%d",sum);
    count++;
    return count;

}
int substraction(int a,int b)
{
    int sub;
    static int count1=0;
    sub=a-b;
    printf("\nSubstratction=%d",sub);
    count1++;
    return count1;

}