// Pointer Will Store The Address Of Another Variable 

#include<stdio.h>

int main()
{

   char ch='a';
   char *px;
   px=&ch;
   printf("\n%c",*px);
   printf("\n%c",&ch);
}