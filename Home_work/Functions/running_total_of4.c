/*
Write a function that maintains a running total of 4 numbers passed to it from main.print the result in main.
 
*/

#include<stdio.h>

float total(float a,float b,float c,float d);

int main()
{
    static float a,b,c,d;
    printf("Enter the Num1,Num2,Num3,Num4 :");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    float ss=total(a,b,c,d);
    printf("Running Total Of Four Numbers= %f",ss);


}
float total(float a,float b,float c,float d)
{
      static  float  avg;
      avg=(a+b+c+d)/4;
      return avg;
}