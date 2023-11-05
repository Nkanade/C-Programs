#include<stdio.h>

int main()
{

    float emp_sal,hra,da,pf,gross_sal,net_sal;
    printf("Enter Basic Salary Pay :");
    scanf("%f",&emp_sal);
    hra=emp_sal*0.2;
    printf("\nHRA Salary= %f ",hra);
    da=emp_sal*0.4;
    printf("\nDA Salary= %f:",da);
    gross_sal=emp_sal+hra+da;
    printf("\nGross_Salary= %f",gross_sal);
    net_sal=gross_sal-pf;
    printf("\nNet_Salary= %f",net_sal);
}

/*
O/P:


HRA Salary= 6000.000000     
DA Salary= 12000.000000:    
Gross_Salary= 48000.000000  
Net_Salary= 48000.000000    

*/