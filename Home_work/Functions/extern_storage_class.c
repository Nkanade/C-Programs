#include<stdio.h>
  float intrestrate=7.33f;
 void display();
int main()
{

    display();
}
void display()
{
   extern float intrestrate;
    printf("%f",intrestrate);
}
