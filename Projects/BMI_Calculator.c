#include<stdio.h>
#include<stdlib.h>

float height(float hei);
float weight(float wei);
float BMI(float wei,float hei);


int main()
{
    float result,hei,wei;
    printf("Body mass index (BMI) is a measure of body fat based on height and weight that applies to adult men and women.");
    printf("\nBMI Calculator");
    float w=weight(wei);
    float h= height(hei);
    BMI(w,h);
    
}

float height(float hei)
{
    printf("Enter The Heights in Cm(Centimeter):");
    scanf("%f",&hei);
    return hei;
}

float weight(float wei)
{
    printf("\nEnter The Weights in Kg(Kilograms):");
    scanf("%f",&wei);
    return wei;
}

float BMI(float wei,float hei)

{
    float result;
    result=wei/hei/hei*10000;

    if(result<=18.5)
    {
        printf("You Are Underweight");
    }
    else if(result>18.5 &&result<=24.9)
    {
        printf("You Have Healthy Weight ");
    }
    else if(result>25 &&result<29.9)
    {
        printf("You Are Overweight");
    }
    else if(result>=30)
    {
        printf("Obesity");
    }

}


