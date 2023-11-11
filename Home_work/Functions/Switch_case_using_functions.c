/*Q11. Write a function to calculate area of circle ,rectangle and triangle using menu driven program(use switch case and functions)*/

#include<stdio.h>
#include<stdlib.h>

int circle(int r);                        // Function Declaration.
int rect(int l,int b);
int triangle(int a,int b,int c);


int main()
{

    int ch,r,l,b,a,c,b1,cr,tr,re;
    printf("\n1.Area Of Circle \n 2.Area Of Rectangle \n3.Area Of Triangle \n4. Exit :");        // Printing MENU.
    scanf("%d",&ch);

    switch (ch)
    {

    case 1: 
               
                 cr=circle(r);                                            // Function Calling
                printf("Area Of Circle =%d",cr);
                break;

    case 2:    
             re= rect(l,b);                                                // Function Calling
            printf("Area Of Rectangle=%d",re);

                break;

    case 3:
              
                
                 tr=triangle(a,b1,c);                                       // Function Calling
                printf("Area Of Triangle=%d",tr);
                break;
    
    case 4:      exit(0);

    default:
                printf("Enter The Valid Input !!!!");
                 break;
    }

   

   

}

int circle(int r)                                            // Function Defination.
{

    printf("Enter The Radius :");
    scanf("%d",&r);
    int area=3.14*r*r;
    return area;
}

int rect(int l,int b)
{
      printf("Enter The Length And Bredth :");
      scanf("%d%d",&l,&b);
      int area=l*b;
      return area;

}

int triangle(int a,int b1,int c)
{
     printf("Enter The A ,B And C :");
      scanf("%d%d%d",&a,&b1,&c);
      int area=a*b1*c;
      return area;

}
