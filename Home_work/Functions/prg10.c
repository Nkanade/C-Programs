// Q13.*


#include<stdio.h>

void fibonacci();


int main()
{

    
    printf("This Is Fibonacci Series Program");
     fibonacci();
   // printf("\n Fibonacci series Is =%d",ss);


}

void fibonacci()
{

    int num,nth,i;
    int n1=0,n2=1;
    printf("\n Enter a Number :");
    scanf("%d",&num);

   for (int i = 1; i <= num; i++) { 
        if (i > 2) { 
            int nth = n1 + n2; 
            n2 = n1; 
            n1 = nth; 
            printf("%d ", nth); 
        } 
       
    }
     if (i == 1) { 
            printf("%d ", n2); 
        } 
        if (i == 2) { 
            printf("%d ", n1); 
        } 
    
    

}