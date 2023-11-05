#include<stdio.h>

void area(float r,float *);

int main()
{
    float r,a;
     
    area(r,&a);
    printf("Area of Circle= %f",a);


}

void area(float r,float *a)
{
    
    printf("Enter the Radius :");
    scanf("%f",&r);
    *a=3.14*r*r;

}