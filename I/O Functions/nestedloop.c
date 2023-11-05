#include<stdio.h>

int main()
{

    int age;
    char gen;
    printf("Enter your age :");
    scanf("%d",&age);
    printf("Enter your gender :");
    scanf("\n%c",&gen);
    if(age>=60)
    {
        if (gen=='f')
        {
            printf("Intrest rate is 9.97");
        }
        printf("Intrest rate is 9.5");
    }printf("Intrest rate is 8");
    
}