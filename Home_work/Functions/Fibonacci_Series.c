/*Q13. Write a function which accept a limit to print finonacci series in a function.*/


#include<stdio.h>

void fibonacci();                                        // Function Declaration.


int main()
{

    
    printf("This Is Fibonacci Series Program");
     fibonacci();                                        // Function Calling.
   


}

void fibonacci()                                        // Function Defination.
{

    int num,nth,i;
    int n1=0,n2=1;
    printf("\n Enter a Number :");
    scanf("%d",&num);

   for (int i = 1; i <= num; i++) {                             // Calculating Fibonacci Series
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
