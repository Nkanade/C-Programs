// No Return No Argument

/*#include<stdio.h>

void area();

int main()
{
    area();

}

void area()
{

    float r,res;
    printf("Enter The Radius  :");
    scanf("%f",&r);
    res=3.14*r*r;
    printf("%f",res);


}*/


// No Rturn With Argument

/*#include<stdio.h>

void area(float r);

int main()
{
float r;
    area(r);

}

void area(float r)
{

printf("Enter The Radius :");
scanf("%f",&r);
float res=3.14*r*r;
printf("%f",res);

}*/







// With Return No Argument

/*#include<stdio.h>

float area();

int main()
{
    float ss=area();
    printf("%f",ss);
}

float area()
{
    float r,res;
    printf("Enter The Radius  :");
    scanf("%f",&r);
    res=3.14*r*r;
    return res;


}*/






//With  Return With Argument


#include<stdio.h>

float area(float r);

int main()
{

float r;
float ss=area(3.4);
printf("%f",ss);

}

float area(float r)
{

    float res=3.14*r*r;
    return res;

}
